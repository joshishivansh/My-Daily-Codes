#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T>0)
    {

        int n,m;
        scanf("%d%d",&n,&m);
        int x,y,s;
        scanf("%d%d%d",&x,&y,&s);
        int a[x];
        int b[y];
        a[0]=-1;
        for(int i=1;i<=x;i++)
            scanf("%d",&a[i]);
        a[i]=x+1;
        b[0]=-1;
        for(int i=1;i<=y;i++)
            scanf("%d",&b[i]);
        b[i]=x+1;
         int i,j;
        for(i=0;i<x+1;i++)
        {
            int temp=a[i+1]-a[i]-1;
            totalv+=temp/s;
            v=totalv;
            for(j=0;j<y+1;j++)
            {
                 int temp1=b[i+1]-b[i]-1;
                 totalh+=temp1/s;
                 h=temp1/s;
                 if(h==0)
                 {
                    totalv-=v;
                
                 }
            }
            
           

        }
       
        T--;
    }
    return 0;
}