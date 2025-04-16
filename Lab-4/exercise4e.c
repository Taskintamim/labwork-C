#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    int x = 0, y = 1;
    for (int i = 0; i < n; i++)
    {
        x += y;
        y += i + 1;
    }
    printf("%d\n", x);

    return 0;
}
