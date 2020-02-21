#include <stdio.h>
int main()
{
    int oc,of,od;
    int d;
    int time,cs,cb,cm,cd;
    scanf("%d",&d);
    scanf("%d%d%d",&oc,&of,&od);
    scanf("%d%d%d%d",&cs,&cb,&cm,&cd);
    time=d/cs;
    int totalonline,totalcab;
    if(d>of)
    {
        totalonline=oc+od*(d-of);
        totalcab=cb+time*cm+d*cd;
    }
    else
    {
        totalonline=oc;
        totalcab=cb+time*cm+d*cd;
    }
    if(totalonline>totalcab)
        printf("Classic Taxi\n");
    else if(totalonline<totalcab)
    {
        printf("Online Taxi\n");
    }
    else
    {
        printf("Online Taxi\n");
    }
    
    
    return 0;
}
