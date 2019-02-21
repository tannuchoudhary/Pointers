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
#include <stdio.h>
int main()
{

    int a[100], i, *num, *ptr, n;
    ptr = &a[0];
    num = &n;
    printf("Input total number of elements(1-100) :");
    scanf("%d",num);
    for(i=0; i<*num; i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0; i<*num; i++)
    {
        printf("Number %d : %d\n", i, *(ptr+i));
    }
     for(i=0; i<n; i++)
    {

        if(*(ptr +i)> *(ptr +i +1))

            *(ptr + i + 1) = *(ptr +i);

        if(*(ptr +i) < *(ptr + i + 1))
        {

           break;
        }


    }
    printf("Expected output is : %d", *(ptr +i +1));
    return 0;

}
