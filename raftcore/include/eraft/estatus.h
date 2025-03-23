// MIT License

// Copyright (c) 2023 ERaftGroup

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

/**
 * @file estatus.h
 * @author ERaftGroup
 * @brief
 * @version 0.1
 * @date 2023-03-30
 *
 * @copyright Copyright (c) 2023
 *
 */

#pragma once

#include <cstdint>

/**
 * @brief
 *
 */
enum class EStatus {
  kOk = 0,
  kNotFound = 1,
  kNotSupport = 2,
  kPutKeyToRocksDBErr = 3,
  kError = 4,
  kDelFromRocksDBErr = 5,
};


struct DBStats {
  uint64_t keys_written;
  uint64_t keys_read;
  uint64_t total_write_bytes;
  uint64_t total_read_bytes;
  uint64_t block_cache_miss;
  uint64_t block_cache_hit;
  uint64_t block_cache_write_bytes;
  uint64_t block_cache_read_bytes;
  uint64_t memtable_hit;
  uint64_t memtable_miss;
  uint64_t get_hit_l0;
  uint64_t get_hit_l1;
  uint64_t get_hit_l2_and_up;
  uint64_t row_cache_hit;
  uint64_t row_cache_miss;
  uint64_t compact_read_bytes;
  uint64_t compact_write_bytes;
  uint64_t flush_write_bytes;
};