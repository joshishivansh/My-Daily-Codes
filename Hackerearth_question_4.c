

//hackerearth question
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
void power(int x,int y)
{
    if(y==0)
    {
        total[99]+=1;
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
        if(total[k]>=10)
        {
            total[k-1]+=1;
            total[k]-=10;
        }
        k--;
    }
    }
    
    for(int i=0;i<=99;i++)
    printf("%d ",total[i]);
    printf("\n");
   
}

void binaryprinting(char ch[],int a)
{
    for(int i=a-1;i>=0;i--)
    {
        if(ch[i]=='1')
        {
            power(2,abs(i-(a-1)));
            printf("\n%d\n",abs(i-(a-1)));
        }
        
    }
    int l=0;
    int sss[100];
    for(int i=99;i>=0;i--)
    {
        if(total[i]!=0)
        {
            sss[l]=total[i];
            l++;
        }
        else
        {
            break;
        }
        
    }
    for(int i=l-1;i>=0;i--)
    printf("%d",sss[i]);
    printf("\n");
    for(int i=0;i<100;i++)
    total[i]=0;

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        if(a%b==0)
        {
            char ch[a];
            ch[0]='1';
            for(int i=1;i<a;i++)
                ch[i]='0';
            
            binaryprinting(ch,a);
        }
        
        else
        {
            int temp=a;
            a=b;
            char ch[temp];
            for(int i=0;i<temp;i+=a)
            {
                ch[i]='1';
                for(int j=i+1;j<=i+a-1;j++)
                    ch[j]='0';
            }
            binaryprinting(ch,temp);

        }
        t--;

    }
    return 0;
}