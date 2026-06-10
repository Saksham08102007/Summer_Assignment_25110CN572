// Write a program to Count digits in a number. 

#include <stdio.h>

int main () {
    int n,count=0,temp;
    printf("Enter number : ");
    scanf("%d",&n);
    temp = n;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    printf("Number of digits in %d is : %d\n",temp,count);
    return 0;
}