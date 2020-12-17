/*
 * Copyright (c) 2020 Arduino.  All rights reserved.
 */

/**************************************************************************************
 * INCLUDE
 **************************************************************************************/

#include <catch.hpp>

#include <RingBuffer.h>

/**************************************************************************************
 * TEST CODE
 **************************************************************************************/

TEST_CASE ("Data is put into the ring buffer via 'store_char'", "[Ringbuffer-store_char-01]")
{
  arduino::RingBufferN<2> ringbuffer;
  ringbuffer.store_char('A');
  REQUIRE(ringbuffer._aucBuffer[0] == 'A');
  ringbuffer.store_char('B');
  REQUIRE(ringbuffer._aucBuffer[1] == 'B');
}

TEST_CASE ("Data is put into big ring buffer via 'store_char'", "[Ringbuffer-store_char-02]")
{
  arduino::RingBufferN<256> ringbuffer;
  for (int i = 0; i < 256; i++) {
  	ringbuffer.store_char(i);
  }
  for (int i = 0; i < 256; i++) {
  	REQUIRE(ringbuffer._aucBuffer[i] == i);
  }
}

TEST_CASE ("Data is put into bigger ring buffer via 'store_char'", "[Ringbuffer-store_char-03]")
{
  arduino::RingBufferN<1024> ringbuffer;
  for (int i = 0; i < 1024; i++) {
  	ringbuffer.store_char(i);
  }
  for (int i = 0; i < 1024; i++) {
  	REQUIRE(ringbuffer._aucBuffer[i] == i);
  }
}