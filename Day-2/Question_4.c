// Write a program to Check whether a number is palindrome.

#include <stdio.h>

int main () {
    int n,i,r,reverse=0,temp;
    printf("Enter number: ");
    scanf("%d",&n);
    temp = n;
    while(n > 0) {
        r = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + r;
    }
    if(temp == reverse) {
        printf("The number is a palindrome number.\n");
    }
    else {
        printf("The number is not a palindrome number.\n");
    }
    return 0;
}