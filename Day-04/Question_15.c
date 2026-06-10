// Write a program to Check Armstrong number. 

#include <stdio.h>
#include <math.h>

int main () {
    int n,r,sum=0,temp,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    if (n < 0) {
        printf("Invalid input.");
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
        printf("%d is an Armstrong number.",temp);
    }
    else {
        printf("%d is not an Armstrong number.",temp);
    }
    return 0;
}