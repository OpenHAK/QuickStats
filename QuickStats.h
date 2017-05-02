/*  QuickStats.h - Library for quick descriptive statistics of an array samples[] of size m,
 *  assuming a normal distribution.
 *  Created by David Dubins, January 10th, 2016.
 *  Released into the public domain.
 */

#ifndef QuickStats_h
#define QuickStats_h

#include <Arduino.h>

class QuickStats {
  public:
    QuickStats();
    ~QuickStats();
    int average(int samples[],int m);
    int g_average(int samples[],int m);
    int minimum(int samples[],int m);
    int maximum(int samples[],int m);
    int stdev(int samples[],int m);
    int stderror(int samples[],int m);
    int CV(int samples[],int m);
    void bubbleSort(int A[],int len);
    int fabs(int sample);
    int median(int samples[],int m);
    int mode(int samples[],int m,int epsilon);
};

#endif
