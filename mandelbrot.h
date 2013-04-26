#ifndef MANDELBROT_H_TW
#define MANDELBROT_H_TW

#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <math.h>
#include <stdbool.h>
//#include <complex.h> // c99

#define SCREEN_RES_X 600
#define SCREEN_RES_Y 600
#define TICK_INTERVAL 30
#define MAX_INTERATIONS 256

typedef struct complexnumber {
    double R;
    double I;
} complex;

void run(int myid, int num_procs);

#endif /* MANDELBROT_H_TW */
