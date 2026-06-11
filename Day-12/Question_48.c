// Write a program to Write function for perfect number.

#include <stdio.h>

int isPerfectNumber(int n) {
    int i,sum=0;
    if (n <= 0) {
        return 0;
    }
    for(i=1;i<n;i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return 1;
    } 
    else {
        return 0;
    }
}

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (isPerfectNumber(num)) {
        printf("Perfect number.");
    } 
    else {
        printf("Not a perfect number.");
    }
    return 0;
}