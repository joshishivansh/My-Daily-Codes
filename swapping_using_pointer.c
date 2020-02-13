#include <stdio.h>
void swap(int *a,int *b,int *c,int *d,int x)
{
    int aa[4]={*a,*b,*c,*d};
    int k=0;
    int s[4];
    for(int k=0;k<x;k++)
    {
        s[k]=aa[k];
    }
    for(int i=x;i<4;i++)
    {
      aa[i-x]=aa[i];
    }
    int l=x;
    for(int j=0;j<x;j++)
    {
        aa[l]=s[j];
        l++;
    }
    *a=aa[0];
    *b=aa[1];
    *c=aa[2];
    *d=aa[3];
    

}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int n;
    scanf("%d",&n);
    swap(&a,&b,&c,&d,n);
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}