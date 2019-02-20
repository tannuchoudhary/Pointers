/*
6. Write a program in C to find the maximum number between two numbers using a pointer.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
6 is the maximum number.
*/
#include<stdio.h>
int main()
{
    int num1, num2;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter two numbers :");
    scanf("%d%d", ptr1, ptr2);
    if(*ptr1 > *ptr2)
        printf("%d is the maximum number.",*ptr1);
        else
            printf("%d is the maximum number.",*ptr2);
        return 0;


}
