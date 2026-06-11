// Write a program to Write function for Fibonacci.

#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1;
    int i,c;
    if (n <= 0) {
        printf("Invalid input.");
    }
    else if (n == 1) {
        printf("Fibonacci series: %d",a);
    }
    else {
    printf("Fibonacci series: %d\t %d\t",a,b);
    for(i=3;i<=n;i++) {
        c = a + b;
        printf("%d\t",c);
        a = b;
        b = c;
    }
    }
}
int main () {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}