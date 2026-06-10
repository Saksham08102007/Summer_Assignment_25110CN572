// Write a program to Recursive Fibonacci. 

#include <stdio.h>

int fibonacci(int);

int main () {
    int n,i;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    if (n <= 0) {
        printf("Enter a positive number.");
        return 0;
    }
    printf("Fibonacci series: \n");
    for (i=0;i<n;i++) {
        printf("%d",fibonacci(i));
    }
    return 0;
}

int fibonacci(int num) {
    if (num == 0) {
        return 0;
    }
    else if (num == 1) {
        return 1;
    }
    else {
        return fibonacci(num - 1) + fibonacci(num - 2); 
    }
}