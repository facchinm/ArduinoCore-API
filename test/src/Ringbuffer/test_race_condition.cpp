/*
 * Copyright (c) 2020 Arduino.  All rights reserved.
 */

/**************************************************************************************
 * INCLUDE
 **************************************************************************************/

#include <catch.hpp>

#include <RingBuffer.h>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


/**************************************************************************************
 * TEST CODE
 **************************************************************************************/
void *Thread1(void *x) {
  arduino::RingBufferN<256>* rb = (arduino::RingBufferN<256>*)x;
  int i = 4096;
  while (rb->availableForStore() && (i-- > 0)) {
  	rb->store_char('A');
    usleep(rand() % 50);
  }

  while (!rb->availableForStore()) {}
  rb->store_char('B');
  return NULL;
}

void *Thread2(void *x) {
  arduino::RingBufferN<256>* rb = (arduino::RingBufferN<256>*)x;
  int c;
  int i = 0;
  usleep(10000);
  while (1) {
    c = rb->read_char();
    usleep(rand() % 50);
    if (c == -1) {
      continue;
    }
    if (c != 'A') {
      break;
    }
    i++;
  }
  REQUIRE(i == 4096);
  return NULL;
}

TEST_CASE ("Try to break the ringbuffer by reading and writing in different threads", "[Ringbuffer-race-condition-01]")
{
  // Spawn two threads, a reader and a writer, and make sure that 
  // we read exacly what we expect
  time_t tx;
  srand((unsigned) time(&tx));
  arduino::RingBufferN<256> ringbuffer;
  pthread_t t[2];
  pthread_create(&t[0], NULL, Thread1, &ringbuffer);
  pthread_create(&t[1], NULL, Thread2, &ringbuffer);

  pthread_join(t[0], NULL);
  pthread_join(t[1], NULL);
}

