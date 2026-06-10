// Write a program to Convert decimal to binary. 

#include <stdio.h>

int main () {
    int decimal,binary[32],i=0,j;
    printf("Enter a decimal number: ");
    scanf("%d",&decimal);
    if (decimal == 0) {
        printf("Binary number: 0\n");
        return 0;
    }
    printf("Binary number: ");
    if (decimal < 0) {
        printf("-");
        decimal = -decimal;
    }
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    for (j=i-1;j>=0;j--) {
        printf("%d",binary[j]);
    }
    return 0;
}