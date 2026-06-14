// Write a program to Linear search. 

#include <stdio.h>

int main () {
    int arr[50],n,i,item,found=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    if (n <= 0 || n > 50) {
        printf("Invalid Array Size.");
        return 0;
    }
    printf("Enter the elements of the array : ");
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&item);
    for (i=0;i<n;i++) {
        if(arr[i] == item) {
            found = 1;
            printf("Element found at %dth position.\n",i+1);
            break;
        }
    }
    if (found == 0) {
        printf("Element not found.\n");
    }
    return 0;
}