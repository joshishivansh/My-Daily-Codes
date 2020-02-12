
\\print the n th no. combination formed from 2,3,5 .... hackerearth question
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int g=1;
int v;
void recursion(int i,int a[],int aa[],int l)
{
if(i==l)
{
  
    if(g==v)
    {
        for(int y=0;y<l;y++)
        printf("%d",aa[y]);
        exit(0);
    }
    g++;
    return;

}
else
{
    for(int j=0;j<3;j++)
    {
        aa[i]=a[j];
        recursion(i+1,a,aa,l);
    }
}

}
int main()
{
    scanf("%d",&v);
    int a[3]={2,3,5};
    int aa[50];
   for(int h=1;;h++)
     recursion(0,a,aa,h);
    return 0;
}
