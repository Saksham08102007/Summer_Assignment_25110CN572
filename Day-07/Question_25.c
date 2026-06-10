// Write a program to Recursive factorial. 

#include <stdio.h>

int factorial(int);

int main () {
    int n,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
        return 0;
    }
    printf("Factorial of %d is: %d",n,factorial(n));
    return 0;
}

int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    return (num * factorial(num - 1));
}