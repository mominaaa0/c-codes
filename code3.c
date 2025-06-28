#include <stdio.h>

int main() {
    int number;

    // Do-while loop starts
    do {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &number);

        printf("You entered: %d\n", number);
    } while (number != 0);

    printf("Loop exited because you entered 0.\n");

    return 0;
}
