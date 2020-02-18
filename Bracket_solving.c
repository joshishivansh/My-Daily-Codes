// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char ch[50];
//     gets(ch);
//     int choa[50];
//     int chob[50];
//     int choc[50];
//     int chca[50];
//     int chcb[50];
//     int chcc[50];
//     int ll=strlen(ch);
//     int flag=0;
//     int l=0,m=0,k=0,n=0,o=0,p=0;
//     for(int i=0;i<ll;i++)
//     {
//         if(ch[i]=='{')
//         {
//             choa[k]=i;
//             k++;
//         }
//         if(ch[i]=='}')
//         {
//             chca[l]=i;
//             l++;
//         }
//         if(ch[i]=='(')
//         {
//             chob[m]=i;
//             m++;
//         }
//         if(ch[i]==')')
//         {
//             chcb[n]=i;
//             n++;
//         }
//         if(ch[i]=='[')
//         {
//             choa[o]=i;
//             o++;
//         }
//         if(ch[i]==']')
//         {
//             choa[p]=i;
//             p++;
//         }

//     }
//     int l1=k,l2=m,l3=o;
//     k=0,l=0,m=0;
//     while(1)
//     {
//         if(chca[k]-chca[k]==2&&k<l1)
//         {
//             flag=1;
//             break;
//         }
//         if(chca[l]-chca[l]==2&&l>l2)
//         {
//             flag=1;
//             break;
//         }
//         if(chca[m]-chca[m]==2&&m>l3)
//         {
//             flag=1;
//             break;
//         }
//         k++;
//         l++;
//         m++;
//         if(k==l1&&m==l3&&l==l2)
//         break;
//     }
//     if(flag==0)
//     printf("balanced");
//     else
//     {
//         printf("Not balanced");
//     }
    
//     return 0;
// }


// #include<stdio.h>
// void main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t>0)
//     {
//         long int x;
//         scanf("%ld",&x);
//         int flag=0;
//         long int mult;

//         while(1)
//         {
//             mult*=10;
//             if(mult==x)
//             {
//             printf("Yes\n");
//             }
//             if(mult>x)
//             {
//             flag++;
//             break;
//             }
//         }
//         mult=1;
//         while(1)
//         {
//             mult*=10;
//             if(mult==x)
//             {
//             printf("Yes\n");
//             }
//             if(mult>x)
//             {
//             flag++;
//             break;
//             }
//         }
//         int mod=x%10



//         t--;
//     }
// }
#include <stdio.h>
void sort(int *p1,int n)
{
    int *ptr=p1+n-1;
    int *p2=p1;
    for(int i=0;i<n-1;i++)
    {
       
        for(int j=1;j<n;j++)
        {
            p2++;
            printf("%d %d\n",*p1,*p2);
            if(*p1<*p2)
            {
                int temp=*p1;
                *p1=*p2;
                *p2=temp;

            }
    
            if(*p2==*ptr)
            {
                printf("*\n");
                p2=p1+1;
                break;
            }
        }
         p1++;
    }
}
int main()
{
    // int arr[50];
    // int n;
    // scanf("%d",&n);
    int arr[4]={2,3,0,1};
    int n=4;
    // for(int i=0;i<n;i++)
    // scanf("%d",&arr[i]);
    sort(arr,n);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}