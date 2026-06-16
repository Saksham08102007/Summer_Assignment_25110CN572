// Write a program to Find missing number in array.

#include <stdio.h>

int main () {
    int n,i,arr[50],sum2=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int sum1 = (((n + 1) * (n+2)) / 2);
    if (n <= 0 || n > 50) {
        printf("Invalid Array Size.");
        return 0;
    }
    printf("Enter elements of an array : \n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) {
        sum2 += arr[i];
    }
    int Missing_number = sum1 - sum2;
    printf("Missing number = %d",Missing_number);
    return 0;
}