/* Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE */

#include <stdio.h>

int main () {
    int i,j,n;
    printf("Enter number of rows:"); //n = 5
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        for (j=65;j<=(i+65);j++) {
            printf("%c\t",j);
        }
        printf("\n");
    }
    return 0;
}