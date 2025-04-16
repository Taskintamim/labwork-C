#include <stdio.h>
#include <math.h>
int main()
{
    float x , result;
    printf("Enter X:");
    scanf("%f", &x);
    result = 3 * pow(x, 5) - 5 * sqrt(x) *  6 * sin(x);
    printf("f(x)= %f\n", result);
    return 0;
}
