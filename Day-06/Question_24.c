// Write a program to Find x^n without pow(). 

#include <stdio.h>

int main () {
    int x,n,i,result=1;
    printf("Enter x & n: ");
    scanf("%d %d",&x,&n);
    if (n == 0) {
        printf("%d^0 = 1",x);
        return 0;
    }
    if (n < 0) {
        printf("-n is not supported using int");
        return 0;
    }
    for (i=1;i<=n;i++) {
        result = result * x;
    }
    printf("%d^%d = %d",x,n,result);
    return 0;
}