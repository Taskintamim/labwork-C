#include <stdio.h>
int main()
{
    int a[10], i;
    for(i = 0; i < 10; i++)
    {
        if (i%2==0)
        {
            printf("%d ", i*3);
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}
