#include <stdio.h>

int main()
{
    int num1, num2, sum, substract, multiply, divide;
    printf("enter the numbers:-\n");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    substract = num1 - num2;
    multiply = num1 * num2;
    divide = num1 / num2;
    printf("\n the sum of numbers are=%d", sum);
    printf("\n the substraction of numbers are=%d", substract);
    printf("\n the multiplication of numbers are=%d", multiply);
    printf("\n the division of numbers are=%d", divide);
    return (0);
}