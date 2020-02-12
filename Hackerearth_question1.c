
//hackerearth question
#include<stdio.h>
#include<string.h>

void main()
{
    char s[1005];
    char s1[1005];
    gets(s);
    gets(s1);
    int l=strlen(s);
    int l1=strlen(s1);
    int j=l1-1,i;
    int k=l-1;
    int c=0;
   while(s[k]!=s1[l1-1])
   k--;
    for(i=k;i>=0;i--)
    {
        if(s1[j]!=s[i])
        c++;
        else
        j--;
        if(j==-1)
        break;
    }
    printf("%d %d %d \n",c,i,j);
    if(c==0 && i==l-l1 && j==-1)
    printf("YES 0");
    else if(j==-1 && i<l-l1)
    printf("YES %d",c);
    else
    printf("NO");
}