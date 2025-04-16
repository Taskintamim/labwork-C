#include <stdio.h>

int main()
{
    int term1, term2, final_term, att, ct1, ct2, ct3, min;
    float ctAvg, total;
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter marks for Student %d\n", i);
        printf("Term 1 : ");
        scanf("%d", &term1);
        printf("Term 2 : ");
        scanf("%d", &term2);
        printf("Final : ");
        scanf("%d", &final_term);
        printf("Attendance : ");
        scanf("%d", &att);
        printf("Class Test 1 : ");
        scanf("%d", &ct1);
        printf("Class Test 2 : ");
        scanf("%d", &ct2);
        printf("Class Test 3 : ");
        scanf("%d", &ct3);
        if (ct1 <= ct2 && ct1 <= ct3)
            min = ct1;
        else if (ct2 <= ct1 && ct2 <= ct3)
            min = ct2;
        else
            min = ct3;
        ctAvg = (ct1 + ct2 + ct3 - min) / 2.0;
        total = ((term1 / 20.0) * 20) + ((term2 / 20.0) * 20) + ((final_term / 30.0) * 30) + ((att / 10.0) * 10) + ((ctAvg / 20.0) * 20);
        printf("Class Test Average: %.2f\n", ctAvg);
        printf("Total Marks: %.2f\n", total);
        if (total >= 90)
            printf("Grade: A\n");
        else if (total >= 80)
            printf("Grade: B\n");
        else if (total >= 70)
            printf("Grade: C\n");
        else if (total >= 60)
            printf("Grade: D\n");
        else
            printf("Grade: F\n");
    }

    return 0;
}

