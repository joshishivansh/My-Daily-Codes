#include <stdio.h>
void printArray(int length,int array[])
{
    for(int i=0;i<=length;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
int main()
{
    enum{size=5};
    int arr[size]={7,5,6,7,-8};
    printArray(size,arr);
    return 0;
}