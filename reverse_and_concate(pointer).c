// #include <stdio.h>
// void reverse(int *p,int n)
// {
//     int temp;
//     int j=n-1;
//   for(int i=0;i<n/2;i++)
//   {
//       temp=p[j];
//       p[j]=p[i];
//       p[i]=temp;
//       j--;
//   }
// }
// int main()
// {
//     int n;
//     int arr[500];
//     scanf("%d",&n);
//     arr[n];
//     for(int i=0;i<n;i++)
//     scanf("%d",&arr[i]);
//     reverse(arr,n);
//     for(int i=0;i<n;i++)
//     printf("%d",arr[i]);

//     return 0;
// }



#include <stdio.h>
#include<string.h>
void concate(char *p1,char *p2,int l1,int l2)
{
    int k=0;
    int i;
    for( i=l1;i<l1+l2;i++)
    {
        p1[i]=p2[k];
        k++;
    }
    p1[i]='\0';
}
int main()
{
    char c1[100],c2[100];
    gets(c1);
    gets(c2);
    int l1=strlen(c1);
    int l2=strlen(c2);
    concate(c1,c2,l1,l2);
    puts(c1);
    

    return 0;
}