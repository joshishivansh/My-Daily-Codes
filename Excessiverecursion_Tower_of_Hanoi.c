\\program to print all the possible words formed by the combination of letters of the given words. 
\\repitation is allowed.......
#include <stdio.h>
#include<string.h>
void recursion(int i,char s[],char ss[],int l)   \\excesive recursion function

{                       \\Tower of Hanoi algorithm.......................
    if(i==l)
    {
        ss[i]='\0';
        puts(ss);
        return;
    }
    else
    {
        for(int j=0;s[j]!='\0';j++)
        {
            ss[i]=s[j];
            recursion(i+1,s,ss,l);
        }
    }
    
}
int main()
{
    char s[50];
    printf("Enter the word that you want to arrange in n boxes\n");
    scanf("%s",s);
    int n;
    printf("Enter the no. of boxes available");
    scanf("%d",&n);
    char ss[n+1];
     recursion(0,s,ss,n);
    return 0;
}