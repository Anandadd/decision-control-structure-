#include<stdio.h>
main()
{
    int x,c;
    printf("enter a no.");
    scanf("%d",&x);
    c=x*x*x;
    if(x<10)
        printf("cube is %d",c);
}
