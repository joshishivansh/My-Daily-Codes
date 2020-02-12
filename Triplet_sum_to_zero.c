
//program to find the sum of threee consecutive no . i.e the triplet... and print that triplet that sum to 0
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int sum=a[i]+a[j]+a[k];
                 if(sum==0)
                 {
                 printf("%d %d %d",a[i],a[j],a[k]);
                 printf("\n");
                 }
                }
            }
        }
    
    return 0;
}
