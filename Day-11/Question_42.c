// Write a program to Write function to find maximum.

#include <stdio.h>
int max(int a,int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}
int main () {
    int x,y;
    printf("Enter a and b : ");
    scanf("%d %d",&x,&y);
    printf("Max = %d",max(x,y));
}