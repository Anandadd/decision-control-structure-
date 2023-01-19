/*program to find the range of a set of no.*/
#include<stdio.h>
main()
{
    int n,no,flag,small,big,range;
    flag=0;
    printf("\n how many no. are there in a set?");
    scanf("%d",&n);
    while(n>0)
    {
        printf("\n enter no.");
        scanf("%d",&no);
        if(flag==0)
        {
            small=big=no;
            flag=1;
        }
        else
            {
            if(no>big)
            big=no;
        if(no<small)
            small=no;
        }
        n--;
    }
    if(small<0)
        range=small+big;
    else
        range=big-small;
    if(range<0)
        range=range*-1;
    printf("\n the range of given set of no. is %d\n",range);
}
