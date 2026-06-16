// Write a program to Remove duplicates from array.

#include <stdio.h>

int main () {
    int n,i,j,k,arr[50];
    printf("Enter number of elements : ");
    scanf("%d",&n);
    if (n <= 0 || n > 50) {
        printf("Invalid Array Size.");
        return 0;
    }
    printf("Enter elements of an array : \n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (arr[i] == arr[j]) {
                for (k=j;k<n-1;k++) {
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Elements of the array after removing duplicates are : \n");
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}