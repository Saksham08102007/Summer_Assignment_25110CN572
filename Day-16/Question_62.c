// Write a program to Find maximum frequency element.

#include <stdio.h>

int main () {
    int n,i,j,arr[50],count=0,maxcount = 0,max_frequency_element;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    if (n <= 0 || n > 50) {
        printf("Invalid Array Size.");
        return 0;
    }
    printf("Enter elements of the array :\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxcount) {
            maxcount = count;
            max_frequency_element = arr[i];
        }
        count = 0;
    }
    printf("Maximum frequency element is : %d and its frequency is : %d",max_frequency_element,maxcount);
    return 0;
}