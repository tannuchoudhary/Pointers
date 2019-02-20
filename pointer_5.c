/*
5. Write a program in C to add numbers using call by reference.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
 The sum of 5 and 6  is 11
*/
#include<stdio.h>
int summation (int *, int *);
int main()
{
    int num1, num2,sum;
    int *x, *y;
    x = &num1;
    y = &num2;
    printf("Enter two numbers :");
    scanf("%d%d", x, y);
    sum = summation(x, y);
    printf("Sum is %d",sum);
    return 0;
}
int summation(int *a, int *b)
{
    int z;
    z = *a + *b;
    return z;
}
