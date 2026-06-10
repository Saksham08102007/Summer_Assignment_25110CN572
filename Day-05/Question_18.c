// Write a program to Check strong number. 

#include <stdio.h>

int main () {
    int n,temp,r,i,sum=0,factorial=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        n = n/ 10;
        for(i=1;i<=r;i++) {
            factorial *= i;        
        }
        sum += factorial;
        factorial = 1;
    }
    if (sum == temp) {
        printf("%d is a strong number.\n",temp);
    }
    else {
        printf("%d is not a strong number.\n",temp);
    }
    return 0;
}