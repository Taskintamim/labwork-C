#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer n: ");
    scanf("%d", &n);

    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        x += i * (i + 1) * (i + 2);
    }
    printf("%d\n", x);
    return 0;
    getch();
}
