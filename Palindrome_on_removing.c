\\wap to check whether a  string is palindrome or not ... and space ',' and ': 'must be ignored in the string and the new string formed on removing : , and space must be  checked ....
#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    gets(s);
    strlwr(s);
    char *s1;
    char sep[]=" ,:";
    s1=strtok(s,sep);
    int j=0,l;
    char c[50];
    while(s1!=NULL)
    {
        l=strlen(s1);
        for(int i=0;i<l;i++)
        {
            c[j]=s1[i];
            j++;
        }
        s1=strtok(NULL,sep);
    }
    c[j]='\0';
    l=strlen(c);
  
    int flag=0;
    for(int i=0;i<l/2;i++)
    {
        if(c[i]!=c[l-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}