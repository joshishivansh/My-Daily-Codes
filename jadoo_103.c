//wap to convert DNA to RNA and write a code in max of 103 character
#include<stdio.h>
void main()
{
    char a[(int)'z'];
    scanf("%s",a);
    int l=strlen(a),i=0-;
    char flag='b';
    for(i='a'-'a';i<l;i++)
    {
        if(a[i]=='G')
        a[i]='C';
        else if (a[i]=='C')
        a[i]='G';
        else if(a[i]=='T')
        a[i]='A';
        else if (a[i]=='A')
        a[i]='U';
        else
        {
            flag='a';
            printf("Invalid Input");
            break;
        }
    }
    if(flag=='b')
    puts(a);
}
