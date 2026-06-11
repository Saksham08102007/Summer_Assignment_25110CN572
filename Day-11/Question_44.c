// Write a program to Write function to find factorial.

#include <stdio.h>

int factorial(int n) {
    int i,factorial=1;
    for (i=1;i<=n;i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Factorial of %d is : %d",num,factorial(num));
    return 0;
}