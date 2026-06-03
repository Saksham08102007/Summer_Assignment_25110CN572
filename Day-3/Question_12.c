// Write a program to Find LCM of two numbers.


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
    if (x == 0 && y == 0) {
        printf("LCM is undefined\n");
        return 0;
    }
    int g = gcd(x,y);
    int LCM = ((x*y)/g);
    printf("LCM of %d and %d is: %d",x,y,LCM);
    return 0;
}
 int gcd(int a,int b ) {
    if (b==0){
        return a;
    }
    return gcd(b,a%b);
 }