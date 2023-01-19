#include<stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d",&x);
    if(x<0)
        printf("absolute value is %d",-1*x);
    else
        printf("absolute value is %d",x);
}
