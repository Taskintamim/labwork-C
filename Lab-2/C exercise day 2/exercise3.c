#include <stdio.h>

int main() {
    int X, Y, Z;
    printf("Enter values for X, Y, and Z: ");
    scanf("%d %d %d", &X, &Y, &Z);
    int result_a = X + 2 * Y + Z + 1;
    int result_b = X - (Y / 3) + (Z * 2) - 1;
    printf("Result of X + 2Y + Z + 1 = %d\n", result_a);
    printf("Result of X - Y/3 + Z*2 - 1 = %d\n", result_b);

    return 0;
}
