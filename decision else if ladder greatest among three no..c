#include<stdio.h>
main()
{
    int x,y,z;
    printf("enter three no.");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z)
        printf("x is greatest no");
    else if (y>x&&y>z)
        printf("y is greatest no.");
        else if (z>x&&z>y)
            printf("z is greatest no.");
}
