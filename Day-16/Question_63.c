// Write a program to Find pair with given sum. 

#include <stdio.h>

int main () {
    int n,i,j,arr[50],target_sum,found=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter the sum : ");
    scanf("%d",&target_sum);
    if (n <= 0 || n > 50) {
        printf("Invalid Array Size.");
        return 0;
    }
    printf("Enter elements of an array : \n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Pairs which form the target sum are :\n");
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if(arr[i] + arr[j] == target_sum) {
                printf("(%d , %d)\n",arr[i],arr[j]);
                found = 1;
            }
        }
    }
    if(found == 0) {
        printf("No pair found.");
    }
    return 0;
}