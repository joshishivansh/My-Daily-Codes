#include<stdio.h>
#include<string.h>
void main()
{
    char ch[40];
    gets(ch);
    char s[40];
    gets(s);
    int l=strlen(ch);
    int l1=strlen(s);
    int c=0,c1=0;
    int flag=0;
    for(int i=0;i<l;i++)
    {
        c=0,c1=0;
        char ce=ch[i];
      for(int j=0;j<l;j++)
      {
          if(ce==ch[j])
          c++;
      }
      for(int j=0;j<l1;j++)
      {
          if(ce==s[j])
           c1++;
      }
      if(c1!=c)
      {
          flag=1;
          printf("Not a amagram string");
          break;
      }
    
}
if(flag==0)
printf("Amagram string");
}

