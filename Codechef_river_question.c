#include <stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t>0)
   {
       int m,n;
       int x,y,s
       scanf("%d%d",&m,&n);
       scan("%d%d%d",&x,&y);
       int a[x],b[y];
       a[0]=0;
       for(int i=1;i<=x;i++)
       scanf("%d",&a[i]);
       a[x+1]=x+1;
       b[0]=0;
       for(int i=1;i<=y;i++)
       scanf("%d",&b[i]);
       b[y+1]=y+1;
       int totalv=0;
       for(int i=0;i<x+1;i++)
       {
           int temp=a[i+1]-a[i]-1;
           if(temp!=0)
            totalv++;
       }
       for(int j=1;i<=totalv;i++)
       {
            for(int i=0;i<y+1;i++)
       {
           int temp=b[i+1]-b[i]-1;
           int temp1=a[j+1]-b[j]-1;
           int house1=temp/s;
           int house=temp/s;
       }
       }



       t--;
   }
    return 0;
}