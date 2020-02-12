
//binary addition program using string
#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    gets(s);
    char s1[50];
    gets(s1);
    int l=strlen(s);
    int l1=strlen(s1);
    int max,min;
    char *p;
    char ch[50];
    if(l>=l1)
    {
    max=l;
    min=l1;
    p=s1;
    }
    else
    {
    max=l1;
    min=l;
    p=s;

    }

    if(l!=l1)
    {
        int j=min-1;
        for(int i=max-1;j>=0;i--)
        {
            p[i]=p[j];
            j--;
        }
        p[max]='\0';
        for(int i=0;i<max-min;i++)
        p[i]='0';
    }
ch[max]='\0';
for(int i=max-1;i>0;i--)
{   
    if(s[i]+s1[i]>=98)
    {
    ch[i]=s[i]+s1[i]-98+48;
    s[i-1]=s[i-1]+1;
    }
    else
    ch[i]=s[i]+s1[i]-48;
}
if(s[0]+s1[0]>=98)
{
    ch[0]=s[0]+s1[0]-98+48;
    for(int j=max+1;j>0;j--)
    ch[j]=ch[j-1];
    ch[0]='1';

}
else
ch[0]=s[0]+s1[0];
puts(ch);
    return 0;
}
