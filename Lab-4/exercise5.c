#include <stdio.h>

int main() {
    int x, y, year;
    printf("Enter two positive year values (start and end): ");
    scanf("%d %d", &x, &y);
    if (x >= y) {
        printf("Invalid input: The first year must be less than the second year.\n");
        return 1;
    }
    printf("Leap years between %d and %d:\n", x, y);
    year = x;
    while (year <= y) {
        if (year % 4 == 0) {
            if (year % 100 != 0 || year % 400 == 0) {
                printf("%d\n", year);
            }
        }
        year++;
    }

    return 0;
}

