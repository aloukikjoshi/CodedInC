#include <stdio.h>

int main() {
    int height, row, space, star;

    printf("Enter the height of the tree: ");
    scanf("%d", &height);

    // Loop through each row of the tree
    for (row = 1; row <= height; row++) {

        // Print spaces before the stars
        for (space = 1; space <= height - row; space++) {
            printf(" ");
        }

        // Print stars for the current row
        for (star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }

        // Move to the next row
        printf("\n");
    }

    // Print the trunk of the tree
    for (space = 1; space <= height - 1; space++) {
        printf(" ");
    }
    printf("*\n");
    for (space = 1; space <= height - 2; space++) {
        printf(" ");
    }
    printf("***\n");
    return 0;
}