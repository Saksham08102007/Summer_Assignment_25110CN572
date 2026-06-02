// Write a program to Find sum of digits of a number.

#include <stdio.h>

int main () {
    int n,r,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    if (n < 0) {
        n = -n; 
    }
    while(n > 0) {
        r = n % 10;
        n = n / 10;
        sum+=r;
    }
    printf("Sum of digits of the number is : %d\n",sum);
    return 0;
}