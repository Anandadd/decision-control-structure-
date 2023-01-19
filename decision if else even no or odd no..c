#include<stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d",&x);
    if(x%2==0)
        printf("no is even %d",x);
    else
        printf("no is odd %d",x);
}
