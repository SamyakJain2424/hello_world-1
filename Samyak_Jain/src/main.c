#include<stdio.h>
#include"../include/array.h"
int main()
{
    double a[10];
    int i;
    sgs_clib_1d_double_array(a);
    for(i=0;i<10;i++)
    {
        printf("%lf ",a[i]);
    }
    return 0;
}