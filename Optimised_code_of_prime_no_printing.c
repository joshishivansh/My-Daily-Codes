//optimised code to find the prime no. between 0 and any no.

#include <stdio.h>
void main()
{
    int n;
    scanf("%u",&n); 
    int a[n+1];
    
    for(int i=0;i<n+1;i++)
    a[i]=0;
    for(int i=2;i<n+1;i++)
    {
        if(a[i]==0)
        {
            for(int j=i+1;j<n+1;j++)
            {
                if(j%i==0)
                a[j]=1;
            }
        }
    }
    for(int i=2;i<n+1;i++)
    if(a[i]==0)
    printf("%d ",i);
}


//above optimised code took approx 1min and 45 sec


#include <stdio.h> //complexity of the program is O(n*n)   and it take about 5 time more time to run the code.
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
        printf("%d ",i);
    }
    return 0;
}





//windows time : 80min
//ubuntu time:20min
//i.e the code above without optimisation
