#include <stdio.h>
int add(int n)
{
    int sum=0;
    while(n>0)
    {
        int d=n%10;
        sum=sum+d*d;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[10000];
    a[0]=n;
    int i=1,flag=0;
    while(1)
    {
        n=add(n);
        for(int j=0;j<i;j++)
        {
            if(a[j]==n)
            {
                flag=1;
                printf("Not a happy no.");
                break;
            }
        }
            if(flag==1)
            break;
             a[i]=n;
             i++;
             if(n==1)
             {
                 printf("Happy no.");
                 break;
             }
        

    }
    return 0;
}


\\important to note here is 7 is a happy no. and 1 is a happy no in single digit no. so here the new logic can be made of that