// Write a program to Find sum and average of array.

#include <stdio.h>

int main () {
    int n,i,sum=0,arr[50];
    float average;
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
    for(i=0;i<n;i++) {
        sum += arr[i];
    }
    average = (float)sum / n;
    printf("Sum = %d\nAverage = %.2f",sum,average);
    return 0;
}