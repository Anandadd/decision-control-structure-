#include<stdio.h>
main()
{
    int x,y,z,s;
    printf("enter side of triangle\n");
    scanf("%d%d%d",&x,&y,&z);
    s=x+y+z;
    if(s==180)
        printf("triangle is valid");
    else
        printf("triangle is not valid");
}
