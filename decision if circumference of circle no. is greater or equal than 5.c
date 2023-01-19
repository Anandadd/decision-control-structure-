#include<stdio.h>
main()
{
    int x;
    float y,c;
    y=3.14;
    printf("enter the radius");
    scanf("%d",&x);
    c=2*y*x;
    if(x>=5)
        printf("circumference of circle is %f",c);
}
