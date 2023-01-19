#include<stdio.h>
main()
{
    int r;
    float y;
    y=3.14;
    printf("enter the radius");
    scanf("%d",&r);
    if(r!=10)
        printf("circumference of circle is %f",2*y*r);
    else
        printf("area of circle is %f",y*r*r);
}
