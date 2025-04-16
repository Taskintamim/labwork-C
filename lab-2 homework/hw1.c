#include <stdio.h>

int main()
{
    float minimum_base_salary = 1500.00;
    int  num_computers;
    float price_per_computer, total_sales, bonus, commission;
    printf("Enter the number of computers:");
    scanf("%d", &num_computers);
    printf("Enter the price of each computer:");
    scanf("%f", &price_per_computer);
    total_sales = num_computers * price_per_computer;
    bonus = num_computers *200.00;
    commission = total_sales *0.02;
    printf("Bonus = %.2f\n", bonus);
    printf("Commission =%.2f\n", commission);
    return 0;

}
