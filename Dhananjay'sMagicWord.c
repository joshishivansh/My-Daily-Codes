#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int l;
        scanf("%d",&l);
        char ch[500];
        scanf("%s",ch);

        for(int i=0;i<l;i++)
        {
            int a=ch[i];
            for(int j=a,k=a;j>=65||k>=65||j<=90||k<=90||j>=97||j<=122||k>=97||k<=122;j++,k--)
            {
               
               if(islower(ch[i]))
               {
                   if(k<97)
                   k++;
                   if(j>122)
                   j--;
               }
               else if(isdigit(ch[i]))
               {
                    ch[i]='C';
                    break;
               }
               else if(isupper(ch[i]))
               {
               if(k<65)
               k++;
               if(j>90)
               j--;
               }
               else{
                   
                   ch[i]='C';
                   break;
               }
               int c1=0,c2=0;

                for(int l=1;l<=j;l++)
                if(j%l==0)
                c1++;

                for(int m=1;m<=k;m++)
                if(k%m==0)
                c2++;

                if(c1==2&&c2==2)
                {
                ch[i]=k;
                break;
                }
                else if(c1==2&&c2!=2)
                {
                ch[i]=j;
                break;
                }
                else if(c2==2&&c1!=2)
                {
                ch[i]=k;
                break;
                }
                
                
            }
        }
        puts(ch);
        t--;
    }
    return 0;
}
