// Write a program to Recursive sum of digits. 

#include <stdio.h>

int digitsSum(int);

int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n < 0) {
        n = -n;
    }
    printf("Sum of digits of a number is: %d",digitsSum(n));
    return 0;
}

int digitsSum(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + digitsSum(num / 10);
}