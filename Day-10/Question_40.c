#include <stdio.h>

int main () {
    int n = 5;
    int i,j,k;
    for (i=1;i<=n;i++) {
        for (j=1;j<=n-i;j++) {
            printf(" ");
        }
        for (k=65;k<=65+i-1;k++) {
            printf("%c",k);
        }
        for (k=65+i-2;k>=65;k--) {
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}