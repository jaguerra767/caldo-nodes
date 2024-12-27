// MIT License
// 
// Copyright (c) 2022 Daniel Robertson
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef UTIL_H_916DF5EE_2C2B_4D3C_A484_A64B176F8D96
#define UTIL_H_916DF5EE_2C2B_4D3C_A484_A64B176F8D96

#include <assert.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Calculates the average value from an array of signed 32-bit integers
 * 
 * @param arr array of values
 * @param len number of values in the array
 * @param avg 
 */
void util_average(
    const int32_t* const arr,
    const size_t len,
    double* const avg);

/**
 * @brief Calculates the median value from an array of signed 32-bit integers
 * 
 * @param arr array of values
 * @param len number of values in the array
 * @param med 
 */
void util_median(
    int32_t* const arr,
    const size_t len,
    double* const med);

int util__median_compare_func(
    const void* a,
    const void* b);

#ifdef __cplusplus
}
#endif

#endif
