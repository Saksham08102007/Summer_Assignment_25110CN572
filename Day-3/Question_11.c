// Write a program to Find GCD of two numbers.

#include <stdio.h>

int gcd(int,int);
int main () {
    int x,y;
    printf("Enter a and b: ");
    scanf("%d %d",&x,&y);
    if (x < 0) {
        x = -x;
    } 
    if (y < 0) {
        y = -y;
    }
    int g = gcd(x,y);
    printf("GCD of %d and %d is: %d",x,y,g);
    return 0;
}
 int gcd(int a,int b ) {
    if (b==0){
        return a;
    }
    return gcd(b,a%b);
 }