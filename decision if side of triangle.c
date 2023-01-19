/*program to check triangle is equilateral,isosceles and scalene */
#include<stdio.h>
main()
{
    int l,b,h;
    printf("enter the side of triangle");
    scanf("%d%d%d",&l,&b,&h);
    if((l==b)&&(l==h))
        printf("equilateral");
    if ((l==b)&&(l!=h)||(l==h)&&(l!=b)||(h==b)&&(h!=l))
        printf("isosceles");
    if (l!=b&&b!=h&&h!=l)
    printf("scalene");
    if((l*l+b*b==h*h)||(h*h+b*b==l*l)||(l*l+h*h==b*b))
        printf("right angle");
}
