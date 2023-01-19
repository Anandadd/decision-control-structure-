#include<stdio.h>
main()
{
    int x,y,z;
    printf("enter three no.");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
            printf("x is greatest no.");
        else
            printf("z is greatest no.");
    }
    else
    {
        if(y>z)
            printf("y is greatest no.");
        else
            printf("z is greatest no.");
    }
}
