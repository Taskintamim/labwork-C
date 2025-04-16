#include <stdio.h>
int main()
{
    int a,i;
    double sum = 0.0;
    printf("Enter the value of A:");
    scanf("%d", &a);
    for(i=1; i<= a; i++)
    {
        sum +=1.0/i;
    }
    printf("%.2f\n", sum);
    getch();

}
