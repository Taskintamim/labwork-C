#include <stdio.h>
int main()
{
    int num;
    printf("Please Enter the number :");
    scanf("%d", &num);
    if(num < 0 || num > 100){
        printf("Invalid input.\n");
    }
    else if (num >= 90){
        printf("Grade is A.\n");
    }
    else if (num >= 80){
        printf("Grade is B.\n");
    }
    else if (num >= 70){
        printf("Grade is C.\n");
    }
    else if (num >= 60){
        printf("Grade is D.\n");
    }
    else{
        printf("Grade is F.\n");
    }
    return 0;
}
