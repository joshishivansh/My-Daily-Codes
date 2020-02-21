// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t>0)
//     {
//         int n,x;
//         scanf("%d%d",&n,&x);
//         int a[100000];
//         for(int i=0;i<n;i++)
//             scanf("%d",&a[i]);
//         int na[100000];
//         int temp,flag=0;
//         for(int i=0;i<n;i++)
//             na[i]=a[i];

//         for(int i=0;i<n-1;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(a[j]<a[i])
//                 {
//                     temp=a[i];
//                     a[i]=a[j];
//                     a[i]=a[i];
//                 }
//             }
//         }
//         int flag1=0;
//         for(int i=1;i<=10*n;i++)
//         {
//             if(flag1==1)
//                 break;
//             for(int j=0;j<n;j++)
//             {
//                 if(na[j]==x)
//                 {
//                     int l=j;
//                     int k=1;
//                     while(l>=0)
//                     {
//                         if(na[l]>na[j])
//                         {
//                             int temp=na[j];
//                             na[j]=na[l];
//                             na[l]=na[j];
//                         }
//                         int c=0;
//                         for(int v=0;v<n;v++)
//                         {
//                             if(na[v]==a[v])
//                             c++;
//                         }
//                         if(c==n)
//                         {
//                              flag=1;
//                              printf("YES\n");
//                              break;
//                         }
//                         l-=k;
//                         k-=2;
//                     }

//                     if(flag==0)
//                     {
//                         int r=j;
//                        int k=1;
//                     while(r<n)
//                     {
//                         if(na[r]<na[j])
//                         {
//                             int temp=na[r];
//                             na[r]=na[l];
//                             na[r]=na[j];
//                         }
//                         int c=0;
//                         for(int v=0;v<n;v++)
//                         {
//                             if(na[v]==a[v])
//                             c++;
//                         }
//                         if(c==n)
//                          {
//                              flag=1;
//                              printf("YES\n");
//                              break;
//                          }
//                         l+=k;
//                         k+=2;
//                     } 
//                     }
//                 }
//                 else{
//                     printf("NO\n");
//                     flag1=1;
//                     break;
//                 }
//             }
//         }


//         t--;
//     }
//     return 0;
// }


#include <stdio.h>
int main()
{
    int arr[5][5]={0};
    int (*p)[5]=arr;
    printf("%d\n",p);
    printf("%d\n",**p);
    printf("%d",*(p+1));
    return 0;
}