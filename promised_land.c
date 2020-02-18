
#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        t--;
        int m,n,h,v,s,sh,vh,i,j;
        scanf("%d %d",&m,&n);
        scanf("%d %d %d",&h,&v,&s);
        int hr[h],vr[v];
        for(i=0;i<h;i++)
        {
            scanf("%d",&hr[i]);
        }
        for (i = 0; i < v; i++)
        {
            scanf("%d",&vr[i]);
        }
        int sum=0;
        int vri=-1;
        int hri;
        for(i=0;i<v;i++)
        {
            vri=vr[i]-2-vri;
            hri=-1;
            for(j=0;j<h;j++)
            {
                hri=hr[j]-2-hri;
                sh=hri/s;
                vh=vri/s;
                sum+=(sh*vh);
                
            }
            hri=m-hr[h-1];
            sh=hri/s;
            vh=vri/s;
            sum+=(sh*vh);
        }
        vri=n-vr[v-1];
        hri=-1;
        for(j=0;j<h;j++)
        {
            hri=hr[j]-2-hri;
            sh=hri/s;
            vh=vri/s;
            sum+=(sh*vh);
        }
        hri=m-hr[h-1];
        sh=hri/s;
        vh=vri/s;
        sum+=(sh*vh);
        printf("%d\n",sum);  
    }
    return 0;
}