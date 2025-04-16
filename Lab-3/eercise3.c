#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two numbers:");
    scanf("%d %d", &x, &y);
    if (y ==0){
        printf("Error!! can't divide.\n");
    }
    else{
        printf("Q=%d, R=%d\n", x/y, x%y);
    }
    return 0;
}
