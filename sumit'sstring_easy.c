#include<stdio.h>
#include<string.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        
        char a[251];
        scanf("%s",a);
        int l=strlen(a);
        int flag=0;
        for(int i=0;i<l-1;i++)
        {
            if(a[i]==122)
            {
                if(a[i+1]==97||a[i+1]==121)
                continue;
                else
                {
                    flag=1;
                    break;
                }
            }
            else if(a[i]==97)
            {
                if(a[i+1]==98||a[i+1]==122)
                continue;
                else
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                if(a[i+1]==(a[i]+1)||a[i+1]==a[i]-1)
                continue;
                else
                {
                    flag=1;
                    break;
                }
            }
            
            
            
        }
        if(flag==0)
        printf("YES\n");
        else
        printf("NO\n");
        
        t--;
    }
}