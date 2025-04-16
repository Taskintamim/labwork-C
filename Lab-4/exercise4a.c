#include <stdio.h>
int main()
{
    int x,sum =0,i;
    printf("Enter the value of X :");
    scanf("%d", &x);
    for (i=1; i<=x; i++)
    {
        sum+=i;
    }
    printf("%d\n", sum);
    getch();
}
