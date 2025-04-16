#include <stdio.h>

int main() {
    int n, result = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        result *= 3;
    }

    printf("3^%d = %d\n", n, result);

    return 0;
}

