#pragma once

#define MBED_CONF_FAT_CHAN_FFS_DBG                                            0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_CODE_PAGE                                       437                                                                                              // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_FS_EXFAT                                        0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_FS_HEAPBUF                                      1                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_FS_LOCK                                         0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_FS_MINIMIZE                                     0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_FS_NOFSINFO                                     0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_FS_NORTC                                        0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_FS_READONLY                                     0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_FS_REENTRANT                                    0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_FS_RPATH                                        1                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_FS_TIMEOUT                                      1000                                                                                             // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_FS_TINY                                         1                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_LFN_BUF                                         255                                                                                              // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_LFN_UNICODE                                     0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_MAX_LFN                                         255                                                                                              // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_MAX_SS                                          4096                                                                                             // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_MIN_SS                                          512                                                                                              // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_MULTI_PARTITION                                 0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_NORTC_MDAY                                      1                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_NORTC_MON                                       1                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_NORTC_YEAR                                      2017                                                                                             // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_SFN_BUF                                         12                                                                                               // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_STRF_ENCODE                                     3                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_STR_VOLUME_ID                                   0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_SYNC_T                                          HANDLE                                                                                           // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_USE_CHMOD                                       0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_USE_EXPAND                                      0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_USE_FASTSEEK                                    0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_USE_FIND                                        0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_USE_FORWARD                                     0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_USE_LABEL                                       0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_USE_LFN                                         3                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_USE_MKFS                                        1                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_USE_STRFUNC                                     0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_USE_TRIM                                        1                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_VOLUMES                                         4                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FF_VOLUME_STRS                                     "RAM","NAND","CF","SD","SD2","USB","USB2","USB3"                                                 // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FLUSH_ON_NEW_CLUSTER                               0                                                                                                // set by library:fat_chan
#define MBED_CONF_FAT_CHAN_FLUSH_ON_NEW_SECTOR                                1                                                                                                // set by library:fat_chan

#if defined __has_include
#  if __has_include (<sys/stat.h>)
#    include <sys/stat.h>
#    define HAVE_SYS_STAT_H
#  endif
#endif

typedef signed   int  ssize_t;  ///< Signed size type, usually encodes negative errors
typedef signed   long off_t;    ///< Offset in a data stream
typedef unsigned int  nfds_t;   ///< Number of file descriptors
typedef unsigned long long fsblkcnt_t;  ///< Count of file system blocks
#if defined(__ARMCC_VERSION) || !defined(__GNUC__)
typedef unsigned int  mode_t;   ///< Mode for opening files
typedef unsigned int  dev_t;    ///< Device ID type
typedef unsigned long ino_t;    ///< File serial number
typedef unsigned int  nlink_t;  ///< Number of links to a file
typedef unsigned int  uid_t;    ///< User ID
typedef unsigned int  gid_t;    ///< Group ID
#endif

/* Flags for open() and fcntl(GETFL/SETFL)
 * At present, fcntl only supports reading and writing O_NONBLOCK
 */
#define O_RDONLY 0        ///< Open for reading
#define O_WRONLY 1        ///< Open for writing
#define O_RDWR   2        ///< Open for reading and writing
#define O_NONBLOCK 0x0004 ///< Non-blocking mode
#define O_APPEND   0x0008 ///< Set file offset to end of file prior to each write
#define O_CREAT    0x0200 ///< Create file if it does not exist
#define O_TRUNC    0x0400 ///< Truncate file to zero length
#define O_EXCL     0x0800 ///< Fail if file exists
#define O_BINARY   0x8000 ///< Open file in binary mode

#define O_ACCMODE   (O_RDONLY|O_WRONLY|O_RDWR)

#define NAME_MAX 255    ///< Maximum size of a name in a file path

#define STDIN_FILENO  0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

struct statvfs {
    unsigned long  f_bsize;    ///< Filesystem block size
    unsigned long  f_frsize;   ///< Fragment size (block size)

    fsblkcnt_t     f_blocks;   ///< Number of blocks
    fsblkcnt_t     f_bfree;    ///< Number of free blocks
    fsblkcnt_t     f_bavail;   ///< Number of free blocks for unprivileged users

    unsigned long  f_fsid;     ///< Filesystem ID

    unsigned long  f_namemax;  ///< Maximum filename length
};

/* The following are dirent.h definitions are declared here to guarantee
 * consistency where structure may be different with different toolchains
 */
struct dirent {
    char d_name[NAME_MAX + 1]; ///< Name of file
    uint8_t d_type;          ///< Type of file
};

enum {
    DT_UNKNOWN, ///< The file type could not be determined.
    DT_FIFO,    ///< This is a named pipe (FIFO).
    DT_CHR,     ///< This is a character device.
    DT_DIR,     ///< This is a directory.
    DT_BLK,     ///< This is a block device.
    DT_REG,     ///< This is a regular file.
    DT_LNK,     ///< This is a symbolic link.
    DT_SOCK,    ///< This is a UNIX domain socket.
};
