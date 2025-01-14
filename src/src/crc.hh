#ifndef _CRC__H_
#define _CRC__H_

#define CRC_BUFFER_SIZE 8192

#include "pkgman.hh"

#include "zlib.h"
#include <inttypes.h>

uint32_t crc32_uint64(uint32_t crc, uint64_t data);

uint32_t crc32_uint32(uint32_t crc, uint32_t data);

uint32_t crc32_level(
        const lvlinfo &lvl,
        const lvlbuf &lb,
        uint32_t timestamp,
        uint32_t last_score,
        int method);

uint32_t crc32_file(const char *path);

#endif
