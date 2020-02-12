//Hackerearth question to count that substring that has a, b, and c in it.....
#include<stdio.h>
#include<string.h>

void main()
{
    
    int t;
    scanf("%d",&t);
    fflush(stdin);
    while(t>0)
    {
        char s[100000];
       scanf("%s",s);
       int a[100000];
       int b[100000];
       int c[100000];
        int l=strlen(s);
        int k=0,q=0,w=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='a')
            {
                a[k]=i+1;
                k++;
            }
        }
        for(int i=0;i<l;i++)
        {
            if(s[i]=='b')
            {
                b[q]=i+1;
                q++;
            }
        }
        for(int i=0;i<l;i++)
        {
            if(s[i]=='c')
            {
                c[w]=i+1;
                w++;
            }
        }
        int sum=0;
        int s1=0,s2=0,s3=0;
        for(int h=1;h<=l;h++)
        {
        for(int i=0;i<=l-h;i++)
         {

            for(int j=i;j<i+h;j++)
            {
                for(int v=0,y=0,p=0;v<k||y<q||p<w;v++,y++,p++)
                {
                if(j==a[v]-1)
                 s1++;
                else if(j==b[y]-1)
                s2++;
                else if(j==c[p]-1)
                {
                s3++;
                }
                }
            }
                if(s1>=1&&s2>=1&&s3>=1)
                 sum=sum;
                else
                {
                sum++;
                }
            
            s1=0,s2=0,s3=0;
         }
        }
       printf("%d\n",sum);
        t--;
    }
}















#include<stdio.h>
#include<string.h>
int check(char ch[],int k)
{
    int s1=0,s2=0,s3=0;
    for(int i=0;i<k;i++)
    {
        if(ch[i]=='a')
        s1++;
        else if(ch[i]=='b')
        s2++;
        else if(ch[i]=='c')
        s3++;
    }
    if(s1>=1&&s2>=1&&s3>=1)
    return 0;
    else
    return 1;
}
void main()
{
    
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        char s[1000000];
        char ch[1000000];
        int sum=0;
       scanf("%s",s);
        int l=strlen(s);
        for(int h=3;h<=l;h++)
        {
        for(int i=0;i<=l-h;i++)
        {
            int k=0;
            for(int j=i;j<i+h;j++)
            {
               ch[k]=s[j];
               k++;
            }
            int s=check(ch,k);
           sum=sum+s;
        }
        }
       printf("%d\n",sum+l+l-1);
        t--;
    }
}











#include <stdio.h>
#include<string.h>
int count=0;
void abc(char a[100000],int b,int x,int y,int z)
{  
    
  int i,p=0,q=0,r=0;
  
  if(z==b+1&&y==b+1)
  {
  printf("%d\n",count);
  return;
  }
  else if(y==b)
  abc(a,b,0,z+1,z+1);
  else
  {  
       for(i=x;i<=y;i++)
       {
       if(a[i]=='a')
       p=1;
       if(a[i]=='b')
       q=1;
       if(a[i]=='c')
       r=1;
       }
                                            
       if(p+q+r==3)
       abc(a,b,x+1,y+1,z);
       else
       {
      
    
    //   printf("{");
    //   for(i=x;i<y;i++)
    //   printf("%c,",a[i]);
    //   printf("%c",a[i]);
    //   printf("}");
      count++;
       

  abc(a,b,x+1,y+1,z);
       }   
    }

    

  
}
int main()
{
    int t;
    scanf("%d",&t);
    fflush(stdin);
    int i;
    while(t>0)
    {
    char a[100000];
    scanf("%s",a);
    int num=strlen(a);
    abc(a,num,0,0,0);
    count=0;
    t--;
    }
    return 0;
}