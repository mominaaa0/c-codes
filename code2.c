#include <stdio.h>

int main() {
    int n, i, j;

    // Ask user to enter the number of rows
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print the pattern
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}