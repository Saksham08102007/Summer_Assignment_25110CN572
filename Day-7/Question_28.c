// Write a program to Recursive reverse number. 

#include <stdio.h>

int reverse(int,int);

int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n < 0) {
        printf("Reverse of a number %d is: -%d",-n,reverse(-n,0));
    }
    else {
        printf("Reverse of a number %d is: %d",n,reverse(n,0));
    }
    return 0;
}

int reverse(int num,int rev) {
    if (num == 0) {
        return rev;
    }
    return reverse((num / 10),((rev * 10)+(num % 10)));
}