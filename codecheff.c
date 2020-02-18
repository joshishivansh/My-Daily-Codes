// #include<stdio.h>
// int main()
// {
//     char tag[10];
//     scanf("%s",tag);
//     int c=0;
//     if(tag[2]=='A' || tag[2]=='E' || tag[2]=='I' || tag[2]=='O' || tag[2]=='U' || tag[2]=='Y')
//     {
//         c=1;
//     }
//     else
//     {
//         if((tag[0]+tag[1])%2!=0)
//         {
//             c=1;
//         }
//         else if((tag[1]+tag[3])%2!=0)
//         {
//             c=1;
//         }
//         else if((tag[3]+tag[4])%2!=0)
//         {
//             c=1;
//         }
//         else if((tag[4]+tag[5])%2!=0)
//         {
//             c=1;
//         }
//         else if((tag[5]+tag[7])%2!=0)
//         {
//             c=1;
//         }
//         else if((tag[8]+tag[7])%2!=0)
//         {
//             c=1;
//         }
//     }
//     if(c==1)
//         printf("invalid");
//     else
//         printf("valid");
// }



// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t)
//     {
//         t--;
//         int m,n,h,v,s;
//         scanf("%d %d",&m,&n);
//         scanf("%d %d %d",&h,&v,&s);
//         int hr[h],vr[v];
//         for(int i=0;i<h;i++)
//         {
//             scanf("%d",&hr[i]);
//         }
//         for (int i = 0; i < v; i++)
//         {
//             scanf("%d",&vr[i]);
//         }
//         int sum=0;
//         int vri=-1;
//         for(int i=0;i<v;i++)
//         {
//             vri=vr[i]-2-vri;
//             int hri=-1;
//             for(int j=0;j<h;j++)
//             {
//                 hri=hr[j]-2-hri;
//                 int temp=(hri*vri)/(s*s);
//                 if(temp%2==0)
//                 {
//                     sum+=temp;
//                 }
//                 else
//                 {
//                     if(hri/s>=temp || vri/s>=temp)
//                     {
//                         sum+=temp;
//                     }
//                     else
//                     {
//                     sum+=temp-1;
//                     }
//                 }
                
//             }
//             hri=m-hr[h-1];
//             int temp=(hri*vri)/(s*s);
//             if(temp%2==0)
//             {
//                 sum+=temp;
//             }
//             else
//             {
//                 if(hri/s>=temp || vri/s>=temp)
//                     {
//                         sum+=temp;
//                     }
//                     else{
//                 sum+=temp-1;
//                     }
//             }
//         }
//         vri=n-vr[v-1];
//         int hri=-1;
//             for(int j=0;j<h;j++)
//             {
//                 hri=hr[j]-2-hri;
//                 int temp=(hri*vri)/(s*s);
//                 if(temp%2==0)
//                 {
//                     sum+=temp;
//                 }
//                 else
//                 {
//                     if(hri/s>=temp || vri/s>=temp)
//                     {
//                         sum+=temp;
//                     }
//                     else{
//                     sum+=temp-1;
//                     }
//                 }
                
//             }
//             hri=m-hr[h-1];
//             int temp=(hri*vri)/(s*s);
//             if(temp%2==0)
//             {
//                 sum+=temp;
//             }
//             else
//             {
//                 if(hri/s>=temp || vri/s>=temp)
//                     {
//                         sum+=temp;
//                     }
//                     else{
//                 sum+=temp-1;
//                     }
//         }
//         printf("%d\n",sum);  
//     }
//     return 0;
// }