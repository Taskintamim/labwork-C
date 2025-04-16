
#include <stdio.h>
int main()
{
    int i,j;
    printf("Input the size of the array A :");
    scanf("%d", &i);
    int a[i], b[i];
    for(j = 0; j < i; j++)
    {
        printf("Input the value of A: ");
        scanf("%d", &a[j]);
    }
    printf("Array B: ");
    for(j = 0; j < i; j++)
    {
        b[j]=a[i-j-1];
        printf("%d ", b[j]);
    }

    return 0;
}



