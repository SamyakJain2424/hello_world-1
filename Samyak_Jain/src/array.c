#include<stdio.h>
#include"../include/array.h"
double * sgs_clib_1d_double_array(double a[10])
{
    int i;
    printf("Enter the elements of the array ");
    for(i=0;i<10;i++)
    {
        scanf("%lf",&a[i]);
    }
    return a;
}