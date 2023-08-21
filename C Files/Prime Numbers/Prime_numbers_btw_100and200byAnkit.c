#include <stdio.h>
int main() {
    int start = 100, end = 200, count = 0;
    for (int i = start; i <= end; i++) {
        int is_prime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            count++;
        }
    }
    printf("There are %d prime numbers between %d and %d.\n", count, start, end);
    return 0;
}