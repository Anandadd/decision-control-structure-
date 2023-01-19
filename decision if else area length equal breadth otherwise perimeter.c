#include<stdio.h>
main()
{
    int l,b;
    printf("enter length and breadth");
    scanf("%d%d",&l,&b);
    if(l==b)
        printf("area is %d",l*b);
    else
        printf("perimeter is %d",2*(l+b));
}
