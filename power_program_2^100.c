
//program to print the 2^100 ......
#include <stdio.h>
#include<math.h>
#define Max 100000
int total[100]={0};
int s=100;
int k=99;
int  multiply(int x,int res[],int size)
{
   int carry=0;
   for(int i=0;i<size;i++)
   {
       int prod=(res[i]*x)+carry;
       res[i]=prod%10;
       carry=prod/10;
   }
   while(carry)
   {
       res[size]=carry%10;
       carry=carry/10;
       size++;
   }
   return size;

}
long int power(int x,int y)
{
    if(y==0)
    {
        total[k]+=1;
    }
    else
    {
    int res[Max]={0};
    int size=0;
    int temp=x;
    while(temp!=0)
    {
        res[size++]=temp%10;
        temp=temp/10;
    }
    for(int i=2;i<=y;i++)
        size=multiply(x,res,size);
    k=99;
    for(int i=0;i<=size-1;i++)
    {
        total[k]+=res[i];
        k--;
    }
    }
   
}
int main()
{
    power(2,100);
  for(int i=0;i<=99;i++)
  printf("%d ",total[i]);

    return 0;
}