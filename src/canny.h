
#ifndef _CANNY_H_
#define _CANNY_H_

#include <stdio.h>
#include <string.h>
#include "ed_pixel.h"
#define KERNEL_SIZE 7

void cu_test_gradient(pixel_t *buf0, pixel_channel_t_signed *deltaX_gray, pixel_channel_t_signed *deltaY_gray, unsigned rows, unsigned cols);
void cu_test_mag(pixel_channel_t_signed *deltaX, pixel_channel_t_signed *deltaY, pixel_channel_t *out_pixel, unsigned rows, unsigned cols);
void cu_test_nonmax(pixel_channel_t *mag, pixel_channel_t_signed *deltaX, pixel_channel_t_signed *deltaY, pixel_channel_t *nms, unsigned parser_length, unsigned offset);
void cu_test_hysteresis(pixel_channel_t *in, pixel_channel_t *out, unsigned row, unsigned cols);

void cu_detect_edges(pixel_t *orig_pixels, int rows, int cols, double kernel[KERNEL_SIZE][KERNEL_SIZE]);

#endif //_CANNY_H_
