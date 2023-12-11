#include <stdio.h>
main()
{
    int ip,rmd;
    float fval;
    printf("\n\n\tEnter is value::");
    scanf("%f",&fval);
     
    ip=fval;
    rmd=ip%10;
    printf("\n right most of ::%d is rmd::%d\n\n",ip,rmd);
 
}