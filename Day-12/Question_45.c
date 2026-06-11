// Write a program to Write function for palindrome.

#include <stdio.h>

int palindrome(int n) {
    int temp = n;
    int reverse = 0;
    int r;
    while (n != 0) {
        r = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + r;
    }
    if (reverse == temp) {
        return 1;
    }   
    else {
        return 0;
    }
}

int main () {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (palindrome(num)) {
        printf("Palindrome number.");
    }
    else {
        printf("Not a palindrome number.");
    }
    return 0;
}