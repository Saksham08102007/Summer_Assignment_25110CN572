// Write a program to Find largest and smallest element.

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
    int largest,smallest;
    largest = smallest = arr[0];
    for(i=1;i<n;i++) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
        if (smallest > arr[i]) {
            smallest = arr[i];
        }
    }
    printf("Largest element = %d\n",largest);
    printf("Smallest element = %d\n",smallest);
    
    return 0;
}