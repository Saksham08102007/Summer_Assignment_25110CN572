// Write a program to Convert binary to decimal. 

#include <stdio.h>
#include <math.h>

int main () {
    int binary,decimal=0,r,i=0;
    printf("Enter a binary number: ");
    scanf("%d",&binary);
    if (binary == 0) {
        printf("Decimal number: 0");
        return 0;
    }
    while (binary != 0) {
        r = binary % 10;
        if (r!=0 && r!=1) {
            printf("Invalid binary number!\n");
            return 0;
        }
        decimal += r * pow(2,i);
        binary /= 10;
        i++;
    }
    printf("Decimal number: %d",decimal);
    return 0;
}