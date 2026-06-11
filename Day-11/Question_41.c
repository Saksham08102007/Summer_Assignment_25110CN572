// Write a program to Write function to find sum of two numbers.

#include <stdio.h>
int sum(int a,int b) {
    return a+b;
}
int main () {
    int x,y;
    printf("Enter a and b : ");
    scanf("%d %d",&x,&y);
    printf("Sum = %d",sum(x,y));
}