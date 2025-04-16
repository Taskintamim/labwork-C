#include <stdio.h>
int main()
{
    float farenheit, celsius;
    printf("Enter Farenheit Temparature:");
    scanf("%f", &farenheit);
    celsius=(5.0/9.0)*(farenheit-32);
    printf("Temparature in celsius:%f\n", celsius);
    return 0;
}
