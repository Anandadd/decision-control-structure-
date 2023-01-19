#include<stdio.h>
main()
{
    int item no,quan;
    float rate,amt,dis,netamt;
    printf("enter item no.");
    scanf("%d",&item no.);
    printf("enter rate and quantity");
    scanf("%f%d",&rate,&quan);
    amt=rate*quan;
    if(item no ==1)
    {
        if(amt>=25000)
            dis=amt*40/100;
        else
            dis=amt*30/100;
    }
    else
    {
        if(amt>=10000)
            dis=amt*25/100;
        else
            dis=amt*15/100;
    }
    netamt=amt-dis;
    printf("amount is %f\n",amt);
    printf("discount is %f\n",dis);
    printf("net amount is %f\n",netamt);
}
