/*
2. Write a program in C to demonstrate how to handle the pointers in the program.
Expected Output :
Address of m : 0x7ffcc3ad291c
 Value of m : 29

 Now ab is assigned with the address of m.
 Address of pointer ab : 0x7ffcc3ad291c
 Content of pointer ab : 29

 The value of m assigned to 34 now.
 Address of pointer ab : 0x7ffcc3ad291c
 Content of pointer ab : 34

 The pointer variable ab is assigned with the value 7 now.
 Address of m : 0x7ffcc3ad291c
 Value of m : 7
*/
#include<stdio.h>

int main()
{
    int *ab;
    int m=29;
    printf("\nAddress of m : %p",&m);
    printf("\nvalue of m  : %d",m);


    printf("\n\n");

    ab = &m;
    printf("\nNow ab is assigned with the address of m.");
    printf("\nAddress of pointer ab : %p",&*ab);
    printf("\nContent of pointer ab : %d",*ab);


    printf("\n\n");

    m = 34;
    printf("\nThe value of m assigned to %d now.", m);
    printf("\nAddress of pointer ab : %p", &*ab);
    printf("\nContent of pointer ab : %d", *ab);
    printf("\n\n");


    m=7;
    printf("\nThe pointer variable ab is assigned with the value %d now",m);
    printf("\nAddress of m : %p",&m);
    printf("\nValue of m : %d",m);

    return 0;

}
