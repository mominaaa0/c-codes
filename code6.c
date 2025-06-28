#include <stdio.h>

int search_number(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return 1; // Found
        }
    }
    return 0; // Not found
}

int main() {
    int numbers[] = {4, 7, 1, 9, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 0;

    int result = search_number(numbers, size, target);
    if (result) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}
