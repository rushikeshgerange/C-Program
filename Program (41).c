#include<stdio.h>

int main()
{
    char ch = 'A';
    int i= 11;
    float f= 31.21f;
    double d = 90.7845;

    char *cp = &ch;
    int *ci = &i;
    float *fp = &f;
    double *dp = &d;

    return 0;
}