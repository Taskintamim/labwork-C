#include <Stdio.h>
int main()
{
    int miles, yards;
    float km;
    printf("Enter the distance in miles and yards\n");
    printf("miles:");
    scanf("%d", &miles);
    printf("Yards:");
    scanf("%d", &yards);
    km = (miles + yards / 1760.0)* 1.609;
    printf("The distance in Kilometer is: %.6f km\n", km);
    return 0;
}
