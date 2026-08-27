#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= n; j++) {
        printf("%2dx%2d=%2d\t", j, i, j * i);
    } 
    printf("\n"); 
    }
return 0;
}