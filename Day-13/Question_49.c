// Write a program to Input and display array. 

#include <stdio.h>

int main () {
    int n,i,arr[50];
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
    printf("Elements of the array are : \n");
    for(i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    return 0;
}