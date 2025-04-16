#include <Stdio.h>
#include <math.h>
int main()
{
    float x1, x2, y1, y2, distance1, distance2;
    printf("Enter the point of X1::\n");
    scanf("%f", &x1);
    printf("Enter the point of Y1::\n");
    scanf("%f", &y1);
    printf("Enter the point of X2::\n");
    scanf("%f", &x2);
    printf("Enter the point of Y2::\n");
    scanf("%f", &y2);
    distance1 = (x1-y1) *(x1-y1);
    distance2 = (x2-y2) *(x2-y2);
    printf("The distance is =%lf", sqrt(distance1 + distance2));
    return 0;
}
