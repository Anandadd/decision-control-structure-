#include<stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d",&x);
    if(x%10==0)
        printf("divisible by 10 is %d",x);
        else
        printf("not divisible by 10");
}
