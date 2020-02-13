
#include<stdio.h>
#include<string.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int flag=0;
        int total=0;
        fflush(stdin);
    
        char s[10000];
        gets(s);
        int a,b;
        scanf("%d%d",&a,&b);
        int l=strlen(s);
        int min;
        if(a>b)
        min=b;
        else
        min=a;
        int j=l-1;
        for(int i=0;i<l/2;i++)
        {
            if(s[i]=='a'&&s[j]=='/'||s[i]=='/'&&s[j]=='a')
                total+=a;
            else if (s[i]=='b'&&s[j]=='/'||s[i]=='/'&&s[j]=='b')
                total+=b;
            else if (s[i]=='/'&&s[j]=='/')
                total+=min*2;
            else if(s[i]=='a'&&s[j]=='b'||s[i]=='b'&&s[j]=='a')
            {
                flag=1;
                break;
            }
            j--;
        }
        
        if(flag==0)
        printf("%d\n",total);
        else
        printf("-1");
        
        
        t--;
    }
}