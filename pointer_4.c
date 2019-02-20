/*
4. Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
The sum of the entered numbers is : 11
*/



#include<stdio.h>

int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Input the first number :");
    scanf("%d",ptr1);
    printf("\nEnter the second number :");
    scanf("%d",ptr2);
    sum = *ptr1 + *ptr2;
    printf("Sum of both numbers will be %d",sum);
    return 0;
}
