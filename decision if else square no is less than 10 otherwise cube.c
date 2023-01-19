#include<stdio.h>
main()
{
    int x;
    printf("enter the no.");
    scanf("%d",&x);
    if(x<10)
        printf("square of a no is %d",x*x);
    else
        printf("cube of a no is %d",x*x*x);
}
