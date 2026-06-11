// Write a program to Write function to check prime.

#include <stdio.h>

int prime(int n) {
    int i,flag=0;
    if (n<=1){
            return 1;
        }
    for (i=2;i<=n/2;i++) {
        if(n%i==0){
            return 1;
        }
    }
    return flag;
}

int main () {
    int num,flag;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (prime(num)==0) {
        printf("Prime number");
    }
    else {
        printf("Not a prime number");
    }
    return 0;
}