#include<stdio.h>
main()
{
    int x,y,z,p;
    printf("enter three no.");
    scanf("%d%d%d",&x,&y,&z);
    p=x*y*z;
    if(x==z)
        printf("product is %d",p);
}
