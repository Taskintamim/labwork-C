#include <stdio.h>
int main()
{
    int a, b,c ;
    printf("Enter the value of A, B, C\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>b && c>a)
    {
        printf("A is biggest, B is medium, C is smallest");
    }
    else if(b>a && a>b && c>a)
    {
        printf("B is biggest, A is medium, C is smallest");
    }
    else{
         printf("C is biggest, A is medium, B is smallest");
    }
    return 0;
}
