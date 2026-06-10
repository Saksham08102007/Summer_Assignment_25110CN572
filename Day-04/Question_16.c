// Write a program to Print Armstrong numbers in a range.

#include <stdio.h>
#include <math.h>

int main () {
    int n1,n2,r,sum,temp,i,j;
    printf("Enter the range (n1,n2): ");
    scanf("%d %d",&n1,&n2);
    for (i=n1;i<=n2;i++) {
        temp = i;
        j = 0;
        sum = 0;
        if (temp < 0) {
            continue;
        }
        if (temp == 0) {
            printf("0\t");
            continue;
        }
        int t = temp;
        while (t > 0) {
            r = t % 10;
            t = t / 10;
            j = j + 1;
        }
        t = temp;
        while (t > 0) {
            r = t % 10;
            t = t / 10;
            sum += pow(r,j);
        }
        if(sum == temp) {
            printf("%d\t",temp);
        }
    }
    return 0;
}