#include<stdio.h>
#include<string.h>
void main()
{
    char s[1000];
    char p[1000];
    gets(s);
    gets(p);
    int l=strlen(s);
    int l1=strlen(p);
    char b[1000];
    for(int i=0;i<l-l1;i++)
    {
        int k=0;
        for(int j=i;j<l1;j++)
        {
            b[k]=s[j];
            k++;
        }
        b[k]='\0';
        if(strcmp(b,p)==0)
        {
        printf("Y");
        i=i+l1-1;
        }
        else
        printf("%c",b[0]);
    }
}



