#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    int left[2*n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    left[0]=0;
    for(int i=1;i<n;i++)
    left[i]=left[i-1]+a[i-1];
    left[2*n-1]=0;
    int k=n-2;
    for(int i=2*n-2;i>=n;i--)
    {
    left[i]=left[i+1]+a[k+1];
    k--;
    }
    k=n;
    for(int i=0;i<n;i++)
    {
        if(left[i]==left[k])
        printf("%d ",i+1);
        k++;
    }
    return 0;
}











#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    int left[n],right[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    left[0]=0;
    for(int i=1;i<n;i++)
    left[i]=left[i-1]+a[i-1];
    right[n-1]=0;
    for(int i=n-2;i>=0;i--)
    right[i]=right[i+1]+a[i+1];
    for(int i=0;i<n;i++)
    {
        if(right[i]==left[i])
        printf("%d ",i+1);
    }
    return 0;
}











#include <stdio.h>
int main()
{
    int n,pos=0;
    scanf("%d",&n);
    int a[n],large=0;
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]>large)
    {
        large=a[i];
        pos=i;
    }
    }
    int right[n];
    right[n-1]=0;
    for(int i=n-2;i>=0;i--)
    right[i]=right[i+1]+a[i+1];
    for(int i=pos;i<n;i++)
    {
        if(((n-1-i)*a[i])>right[i])
        printf("%d ",a[i]);
    }
    printf("%d",a[n-1]);
    
    return 0;
}












#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int largest=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>largest)
        largest=a[i];
    }
    int *pt=(int *)calloc(largest+1,sizeof(int));
    int *extra=pt;
    for(int i=0;i<n;i++)
    extra[a[i]]++;
    for(int i=0;i<largest+1;i++)
    {
        if(extra[i]!=0)
        {
            if(extra[i]>n/2)
            {
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}