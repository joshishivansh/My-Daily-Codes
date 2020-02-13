#include <stdio.h>
#define Max 100000
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
void power(int x,int y)
{
    if(y==0)
    {
        printf("%d",1);
        return;
    }
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
    for(int i=size-1;i>=0;i--)
        printf("%d ",res[i]);
}

int main()
{
   int x,y;
   scanf("%d%d",&x,&y);//x to the power y
   power(x,y);
    return 0;
}