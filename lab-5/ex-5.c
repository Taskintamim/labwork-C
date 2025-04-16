#include <stdio.h>
int main()
{
int a[100],i,j,sum = 0;
printf("How many Fibonacci numbers you want to generate: ");
scanf("%d", &i);
a[0]=0;
a[1]=1;
for (j = 2; j<i+2; j++)
{
    sum+=a[j-2];
    a[j]=sum;
}
for (j = 2; j<i+2; j++)
{
    printf("%d ", a[j]);
}
return 0;
}
