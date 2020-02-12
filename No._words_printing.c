
//program to print the no. in  words .. but in this program it is coming error so be carefull......... i have written here the logic 
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[4];
    int i=0;
    int num=n;
char *ones[]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
char *el[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
char *tens[]={"","","Twenty","Thirty","Fourteen","FiftY","Sixty","Seventy","Eighty","Ninety"};
    while(n>0)
    {
        a[i]=n%10;
        i++;
        n=n/10;
    }
    if(i==4)
    printf("%s Thousand",a[3]);
    if(i>=3 && a[2]!=0)
    printf("%s Hundred ",a[2]);
    if(i>=2)
    {
        if(a[1]==0)
        printf("%s\n",ones[a[0]]);
        else if(a[1]==1)
        printf("%s\n",el[a[0]]);
        else
        {
            printf("%s %s\n",tens[a[1]],ones[a[0]]);
        }
        
    }
    if(i==1 && num!=0)
    printf("%s\n",ones[a[0]]);
    if(num==0)
    printf("Zero\n");
 
    return 0;
}



