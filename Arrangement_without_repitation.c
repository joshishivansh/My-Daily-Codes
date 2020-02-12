
\\program to print the arrangemet of the string... when repitation is not allowed in the program 
#include <stdio.h> 
void recursion(int arr[], int data[], int start, int end, int index, int r) 
{ 

    if (index == r) 
    { 
        if(data[0]+data[1]+data[2]==0)
        {
        for (int j=0; j<r; j++) 
         printf("%d ", data[j]); 
        printf("\n"); 
        }
        return; 
    } 
  
    for (int i=start; i<=end && end-i+1 >= r-index; i++) 
    { 
        data[index] = arr[i]; 
        recursion(arr, data, i+1, end, index+1, r); 
    } 
} 
int main() 
{ 
    int arr[6];
    for(int i=0;i<6;i++)
    scanf("%d",&arr[i]);
    int r = 3; 
    int n = 6;
    int aa[3];
    recursion(arr,aa,0, n-1,0, r); 
} 
