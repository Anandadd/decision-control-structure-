#include<stdio.h>
main()
{
    int x,y;
    printf("enter two no.");
    scanf("%d%d",&x,&y);
    if(x!=y)
        printf("product is %d",x*y);
    else
        printf("sum is %d",x+y);
}
