#include<stdio.h>
main()
{
    int pos,neg,zero,n;
    char ans;
    pos=0,neg=0,zero=0;
    do
    {
        printf("\n enter a no.");
        scanf("%d",&n);
        if(n==0)
            zero++;
        if(n>0)
            pos++;
        if(n<0)
            neg++;
            fflush(stdin);
        printf("\n do you want to continue");
        scanf("%c",&ans);
    }while(ans=='y'||ans=='Y');
    printf("you enter the positive value %d",pos);
    printf("you enter the negative value %d",neg);
    printf("you enter the zero value %d",zero);
}
