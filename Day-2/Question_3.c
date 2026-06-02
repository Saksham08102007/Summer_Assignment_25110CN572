// Write a program to Find product of digits.

#include <stdio.h>

int main () {
    int n,r,product=1;
    printf("Enter number: ");
    scanf("%d",&n);
    if (n < 0) {
        n = -n;
    }
    if (n == 0) {
        product = 0;
    }
    while(n > 0) {
        r = n % 10;
        n = n / 10;
        product*=r;
    }
    printf("Product of digits of the number is : %d\n",product);
    return 0;
}