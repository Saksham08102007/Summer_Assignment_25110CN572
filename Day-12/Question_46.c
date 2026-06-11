// Write a program to Write function for Armstrong.

#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int r,sum=0,temp,i=0;
    temp = n;
    if (n < 0) {
        return 0;
    }
    while (n > 0) {
        r = n % 10;
        n = n/ 10;
        i = i + 1;
    }
    n = temp;
    while (n > 0) {
        r = n % 10;
        n = n / 10;
        sum += pow(r,i);
    }
    if(sum == temp) {
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
    if(isArmstrong(num)) {
        printf("Armstrong number.");
    }
    else {
        printf("Not an Armstrong number.");
    }
    return 0;
}