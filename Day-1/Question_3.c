// Write a program to Find factorial of a number.

#include <stdio.h>

int main () {
    int n,i,factorial=1;
    printf("Enter number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        factorial*=i;
    }
    printf("Factorial of %d is : %d\n",n,factorial);
    return 0;
}