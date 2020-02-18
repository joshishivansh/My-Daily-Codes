#include <stdio.h>
#include<string.h>
int main(void) {
   int t;
   scanf("%d",&t);
   while(t>0)
   {
       
       char s1[100];
       scanf("%s",s1);
       char s2[100];
       scanf("%s",s2);
       int l=strlen(s1);
       int min=0,max=0;
       for(int i=0;i<l;i++)
       {
           if(s1[i]=='?'&&s2[i]!='?'||s2[i]=='?'&&s1[i]!='?'||s2[i]=='?'&&s1[i]=='?')
           continue;
           else if(s1[i]!=s2[i])
           min++;
           else
           continue;
       }
       for(int i=0;i<l;i++)
       {
           if(s1[i]=='?'&&s2[i]!='?'||s2[i]=='?'&&s1[i]!='?'||s2[i]=='?'&&s1[i]=='?')
           max++;
           else if(s1[i]!=s2[i])
           max++;
           else
           continue;
       }
       printf("%d %d\n",min,max);
       t--;
   }
	return 0;
}

