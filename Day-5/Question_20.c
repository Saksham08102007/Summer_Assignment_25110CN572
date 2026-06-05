// Write a program to Find largest prime factor. 

#include <stdio.h>

int main () {
    int n,i,largest=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    for(i=2;i<=n;i++) {
        while (n % i == 0) {
            largest = i;
            n = n / i;
        }
    }
    printf("Largest prime factor of %d is: %d",temp,largest);
    return 0;
}