#include <stdio.h>
#include<string.h>
void reverse(char *ch,int l){
    char temp;
    int pos=0;
    int c;
    for(int j=0;j<l+1;j++)
    {
       
      c=0;
        if(ch[j]==' ')
        {
            int n=j;
            int ll=n-1;
    for(int i=pos;;i++)
    {
        if(i>ll)
        break;
        temp=ch[ll];
        ch[ll]=ch[i];
        ch[i]=temp;
        ll--;
        

    }
      pos=j+1;
        }
        c++;
    }

}
int main()
{
    char ch[50];
    gets(ch);
    int l=strlen(ch);
    ch[l]=' ';
    ch[l+1]='\0';
    reverse(ch,l);
    
    
    puts(ch);
    return 0;
}