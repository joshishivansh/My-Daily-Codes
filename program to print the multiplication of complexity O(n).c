//program to print the multiplication of all the no. except that particular index...... O(n)complexity of the program .... division operator must not be used in the program 
#include<stdio.h>
int main()
{
    int a[50];
    int n;
    scanf("%d",&n);
    for(int I=0;I<n;I++)
    scanf("%d",&a[I]);
    int left[n];
    int right[n];
    left[0]=1;
    
    for(int I=1;I<n;I++)
    left[I]=left[I-1]*a[I-1];
    right[n-1]=1;
    for(int I=n-2;I>=0;I--)
    right[I]=right[I+1]*a[I+1];
    for(int I=0;I<n;I++)
    a[I]=left[I]*right[I];
    for(int I=0;I<n;I++)
    printf("%d ",a[I]);
    return 0;
}