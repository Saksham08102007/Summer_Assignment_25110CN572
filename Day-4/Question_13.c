// Write a program to Generate Fibonacci series. 

#include <stdio.h>

int main () {
    int n,a,b,c,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    a = 0, b = 1;
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
    return 0;
}