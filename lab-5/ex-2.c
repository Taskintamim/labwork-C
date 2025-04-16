#include <stdio.h>
int main()
{
    int marks[10], count, sum=0, avg;
    for (count = 0; count < 10; count++)
    {
        printf("Enter person %d's score :", count+1);
        scanf("%d", &marks[count]);
        sum+=marks[count];
    }
    avg =sum/10;
    printf("The average score is %d", avg);
    return 0;
}
