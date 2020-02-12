

//hackerearth question
#include <stdio.h>
#include<math.h>
void binaryprinting(char ch[],int a)
{
    int sum=0,j=0;
    for(int i=a-1;i>=0;i--)
    {
        sum=sum+ch[i]*pow(2,j);
        j++;
    }
    printf("%d\n",sum);
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
            while(a%b==0)
            {
            a=b;
            b=a%b;
            }
            char ch[temp];
            for(int i=0;i<=temp;i+=a)
            {
                ch[i]='1';
                for(int j=i+1;j<=i+a-1;j++)
                    ch[j]='0';
            }
            binaryprinting(ch,temp);

        }
        

    }
    return 0;
}