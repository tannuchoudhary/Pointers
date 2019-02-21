/*
9. Write a program in C to find the largest element using Dynamic Memory Allocation.
Test Data :
Input total number of elements(1 to 100): 5

Number 1: 5
Number 2: 7
Number 3: 2
Number 4: 9
Number 5: 8
Expected Output :
The Largest element is :  9.00
*/
#include<stdio.h>

int main()
{
    char str[100], *ptr, i;
    ptr = &str[0];
    static int count;
    printf("Enter any string :");
    gets(str);
    printf("The length of the given string ");
    for(i=0; *(ptr + i) < "\0"; i++)
    {
       printf("%c",*(ptr +i));
       count++;
    }
    printf("is : %d",count-1);
    return 0;

}
