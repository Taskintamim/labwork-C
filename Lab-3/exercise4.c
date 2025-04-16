#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d", &year);
    if (year%4==0 && year%400==0)
        printf("Leap year\n");
    else{
        printf("Not Leap Year\n");
    }
    return 0;
}
