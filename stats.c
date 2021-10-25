#include "stats.h"
#include <cstdio>
float avg(const float* numberset, int setlength)
{
    for(int i = 0; i < setlength; i++)
 {
      total += numberset[i];
 }
    s.average = total/(float)setlength;
    return  s.average;
}

float min(const float* numberset, int setlength)
{
    s.min = numberset[0];
    for(int i = 0; i < setlength; i++)
 {
    if(numberset[i] < s.min)
    {
        s.min = numberset[i];
    }
 }
    return  s.min;
}

float max(const float* numberset, int setlength)
{
    s.max = numberset[0];
    for(int i = 0; i < setlength; i++)
 {
    if(numberset[i] > s.max)
    {
        s.max = numberset[i];
    }
 }
    return  s.max;
}
void main()
{
    float numberset[] = {1.5, 8.9, 3.2, 4.5};
    int setlength = 4;
    avg(numberset, setlength);
    printf("avg = %f\n", s.average);
    min(numberset, setlength);
    printf("min = %f\n", s.min);
    max(numberset, setlength);
    printf("max = %f\n", s.max); 
}
