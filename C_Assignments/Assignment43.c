/*
In this user need to give numeric value like 2, 3, 4, 5, 6, 7...like this with the character of the specified number
& the program has to generate the combinations of the character of the given 
*/
#include <stdio.h>
#include <stdlib.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate permutations
void generatePermutations(char *arr, int left, int right) {
    // Base case: If left index reaches the right, we found a permutation
    if (left == right) {
        for (int i = 0; i <= right; i++) {
            printf("%c ", arr[i]);
        }
        printf("\n");
        return;
    }

    // Permute the remaining characters
    for (int i = left; i <= right; i++) {
        swap(&arr[left], &arr[i]);          // Swap to create a new configuration
        generatePermutations(arr, left + 1, right); // Recurse for the next position
        swap(&arr[left], &arr[i]);          // Backtrack to restore the original array
    }
}

int main() {
    int c;

    // Get the number of characters
    printf("Enter the number characters C : ");
    if (scanf("%d", &c) != 1 || c <= 0) {
        printf("Invalid number of characters.\n");
        return 1;
    }

    // Allocate memory for the characters
    char *arr = (char *)malloc(c * sizeof(char));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Get the distinct characters
    printf("Enter %d distinct characters : ", c);
    for (int i = 0; i < c; i++) {
        // The space before %c tells scanf to skip any leading whitespace/newlines
        scanf(" %c", &arr[i]);
    }

    printf("\nPossible combinations:\n");
    generatePermutations(arr, 0, c - 1);

    // Free allocated memory
    free(arr);
    return 0;
}


