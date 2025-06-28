#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Print the first n natural numbers
    printf("The first %d natural numbers are:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
