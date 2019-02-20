/*
7. Write a program in C to store n elements in an array and print the elements using pointer.
Test Data :
Input the number of elements to store in the array :5
Input 5 number of elements in the array :
element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
Expected Output :
 The elements you entered are :
 element - 0 : 5
 element - 1 : 7
 element - 2 : 2
 element - 3 : 9
 element - 4 : 8
*/
#include<stdio.h>
int main()
{

    int a[100],n,i;
    int *p;
    p = a;
    printf("Input the number of elements to store in an array:");
    scanf("%d",&n);
    printf("\nInput %d number of element in the array :",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0; i<n; i++)
    {
        printf("\nelement - %d : %d", i, *(p+i));
    }
    printf("\nThe elements you entered are :");
    for(i=0; i<n; i++)
    {
        printf("\nelement - %d : %d", i, *(p+i));
    }
    return 0;

}
