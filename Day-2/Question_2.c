// Write a program to Reverse a number.

#include <stdio.h>

int main () {
    int n,r,reverse=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n > 0) {
        r = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + r;
    }
    printf("Reverse of the number is : %d\n",reverse);
    return 0;
}