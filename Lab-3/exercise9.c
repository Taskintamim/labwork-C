#include <stdio.h>
int main()
{
    int x,y;
    printf("Please Enter X, Y :");
    scanf("%d %d", &x , &y);
    if (x > 0 && y > 0)
    {
        printf("This point is in Region1\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("This point is in Region2\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("This point is in Region3\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("This point is in Region4\n");
    }
    else{
        printf("This point is on the axis.\n");
    }
    return 0;
}
