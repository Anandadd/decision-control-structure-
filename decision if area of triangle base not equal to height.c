#include<stdio.h>
main()
{
    int b,h;
    float a;
    printf("enter the base and height ");
    scanf("%d%d",&b,&h);
    a=1.0/2*b*h;
    if(b!=h)
        printf("area of triangle is %f",a);
}
