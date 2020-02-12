//program to print that triplet that sum near to the given no. 
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int aa,b,c,aaa;
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int target;
    scanf("%d",&target);
    int small=a[0]+a[1]+a[2];
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int sum=a[i]+a[j]+a[k];
                int diff=target-sum;  
                diff=abs(diff);          
                if(diff<small)
                {
                small=diff;
                aaa=sum;
                aa=i;
                b=j;
                c=k;
                }
            }
        }
    }

printf("%d\n",aaa);
printf("Index of those are:\n");
printf("%d %d %d",aa,b,c);
    return 0;
}
