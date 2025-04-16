#include <stdio.h>
int main()
{
    int X;
    printf("please Enter the number :");
    scanf("%d", &X);
    if (X %2 ==0)
    {
        printf("The number you entered is Even\n");
    }
    else{
        printf("The number you entered is Odd\n");
    }
    return 0;
}
