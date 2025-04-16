#include <stdio.h>
int main()
{
    int i,j,a[50],s;
    printf("Input the size of the array A: ");
    scanf("%d", &i);
    for (j = 0; j < i; j++)
    {
        printf("Input the values :");
        scanf("%d", &a[j]);
    }
    s =a[0];
    for (j =0; j < i; j++)
    {
        if (a[j]<s)
        {
            s = a[j];
        }
    }
    printf("The Smallest vfalue is : %d", s);
    return 0;
}

