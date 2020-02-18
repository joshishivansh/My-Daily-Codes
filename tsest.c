#include <stdio.h>
int main()
{
    int d=19;
    int *x=&d;
    printf("%d\n",x);
    int *temp=&x;
    printf("%d",*temp);

    return 0;
}