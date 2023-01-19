#include<stdio.h>
main()
{
    int l,b,a;
    printf("enter length and breadth");
    scanf("%d%d",&l,&b);
    a=l*b;
    if(l!=b)
        printf("area of rectangle %d",a);
}
