/*
3. Write a program in C to demonstrate the use of &(address of) and *(value at address) operator.
Expected Output :
Pointer : Demonstrate the use of & and * operator :
--------------------------------------------------------
 m = 300
 fx = 300.600006
 cht = z

 Using & operator :
-----------------------
 address of m = 0x7ffda2eeeec8
 address of fx = 0x7ffda2eeeecc
 address of cht = 0x7ffda2eeeec7

 Using & and * operator :
-----------------------------
 value at address of m = 300
 value at address of fx = 300.600006
 value at address of cht = z

Using only pointer variable :
----------------------------------
 address of m = 0x7ffda2eeeec8
 address of fx = 0x7ffda2eeeecc
 address of cht = 0x7ffda2eeeec7

 Using only pointer operator :
----------------------------------
 value at address of m = 300
 value at address of fx= 300.600006
 value at address of cht= z

*/
#include<stdio.h>
int main()
{
    int *i;
    double *d;
    char *c;

    int m = 300;            //declaring and assigning non pointer variables.
    double fx = 300.600006;
    char cht = 'z';
    i = &m;
    d = &fx;
    c = &cht;
   /* m = &300;
    fx = &300.600006;
    cht = &'z';
    */
    printf("Demonstrate the use of & and * operator :");
    printf("\n------------------------------------------------------------------");
    printf("\nm = 300\nfx = 300.600006\ncht = z");

    printf("\n\n");

    printf("\nusing & operator :");
    printf("\n-------------------------------");
    printf("\naddress of m = %p", &m);
    printf("\naddress of fx = %p", &fx);
    printf("\naddress of cht = %p", &cht);

    printf("\n\n");

    printf("\nUsing & and * operator");
    printf("\n-------------------------------");
    printf("\nvalue at address of m = %d", *&m);
    printf("\nvalue at address of fx = %lf", *&fx);
    printf("\nvalue at address of cht = %c", *&cht);


    printf("\n\n");
    printf("\nusing only pointer variable");
    printf("\n--------------------------------");
    printf("\naddress of m = %p", i);
    printf("\naddress of fx = %p", d);
    printf("\naddress of cht = %p", c);

    printf("\n\n");
    printf("\nusing only pointer operator :");
    printf("\n----------------------------------");
    printf("\nvalue at address of m = %d", *i);
    printf("\nvalue at address of fx = %lf", *d);
    printf("\nvalue at address of cht = %c", *c);

    return 0;
}
