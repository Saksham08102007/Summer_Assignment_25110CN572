// Write a program to Find nth Fibonacci term. 

#include <stdio.h>

int main () {
    int n,a,b,c,i,term;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    a = 0, b = 1;
    if (n <= 0) {
        printf("Invalid input.");
    }
    else if (n == 1) {
        printf("Fibonacci series: %d",a);
        printf("The %dth Fibonacci term is: %d",n,a);
    }
    else if (n == 2) {
        printf("The %dth Fibonacci term is: %d",n,b);
    }
    else {
    for(i=3;i<=n;i++) {
        c = a + b;
        a = b;
        b = c;
        if (i == n) {
            term = c;
            break;
        }
    }
    printf("The %dth Fibonacci term is: %d", n, term);
    }
    return 0;
}