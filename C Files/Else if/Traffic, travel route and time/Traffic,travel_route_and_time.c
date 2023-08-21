#include <stdio.h>
int main() {
    int traffic;

    printf("Enter traffic condition(1 = light traffic, 2 = heavy traffic, 3 = very heavy traffic): ");
    scanf("%d", &traffic);

    if (traffic == 1) {
        printf("Route 1 selected with estimated travel time of 20 minutes.\n");
    } else if (traffic == 2) {
        printf("Route 2 selected with estimated travel time of 35 minutes.\n");
    } else if (traffic == 3) {
        printf("Route 3 selected with estimated travel time of 50 minutes.\n");
    } else {
        printf("Invalid traffic condition. Please enter a value between 1 and 3.\n");
    }
    return 0;
}
