
// hackerearth program-- most frequent question

#include<stdio.h>
void main()
{
int n,a[10000],I,c[2*1000000+1]={0},s,l=0;
scanf("%d",&n);
for(I=0;I<n;I++)
{
scanf("%d",&a[I]);
c[a[I]+1000000]++;
}
for(I=0;I<2*1000000+1;I++)
if(c[I]>l)
{
l=c[I];
s=I-1000000;
}
printf("%d",s);
}
