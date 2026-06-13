// Write a program to Count even and odd elements.

#include <stdio.h>

int main () {
    int n,i,arr[50],even_count=0,odd_count=0;
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
        if (arr[i] % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }
    printf("Total even elements are : %d\n",even_count);
    printf("Total odd elements are : %d\n",odd_count);
    return 0;
}