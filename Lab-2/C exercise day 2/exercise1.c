#include <stdio.h>
int main ()
{
    double height, length, width, volume;
    printf("Enter height of box:");
    scanf("%lf", &height);
    printf("Enter length of box:");
    scanf("%lf", &length);
    printf("Enter width of box:");
    scanf("%lf", &width);
    volume = height*length*width;
    printf("volume(cubic inches): %lf\n", volume);
    return 0;
}
