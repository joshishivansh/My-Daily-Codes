#include<stdio.h>
#include<string.h>
void main()
{
    int t;
    scanf("%d",&t);
    fflush(stdin);
    char s[1000];
    int b[1000];
    scanf("%s",s);
    int l=strlen(s);
    if(l%2!=0)
    {
        while(t>0)
        {
        int k=0;
    for(int i=0;i<l;i+=2)
    {
        b[k]=s[i];
        k++;
    }
    
    for(int j=l-2;j>=0;j-=2)
    {
        b[k]=s[j];
        k++;
    }
    for(int ll=0;ll<l;ll++)
    {
        s[ll]=b[ll];
    }
    t--;
    }
   puts(s);
    }
else
{
    while(t>0)
        {
        int k=0;
    for(int i=0;i<l-1;i+=2)
    {
        b[k]=s[i];
        k++;
    }
    b[k]=s[l-1];
    k++;
    for(int j=l-3;j>=0;j-=2)
    {
        b[k]=s[j];
        k++;
    }
    for(int ll=0;ll<l;ll++)
    {
        s[ll]=b[ll];
    }
    t--;
    }
    puts(s);
}
}

