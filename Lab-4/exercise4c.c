#include <stdio.h>
int main()
{
    int t, sum=0,i;
    printf("Enter the value of T:");
    scanf("%d", &t);
    for(i=1; i<t; i+=2)
    {
        sum +=i*(i+1);
    }
    printf("%d\n", sum);
    getch();
}
