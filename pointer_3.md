# Multiple indirection: 
Pointer variable can not only point to the different data types but also can point to the other pointer variables,.When we use pointer to
access data stored at an address, we call it dereferencing or indirection and accesing a data from a pointer pointing to another pointer is
called multiple indirection.

we access the data stored in pointer by using indirection operator(*).Let us assume there is a pointer variable:

`int *pi;`
(pi is a pointer variable pointing to some data)

then there could be another pointer variable:

`int **ppi;`(ppi is a pointer variable pointing to pi, a pointer variable that is pointing to a data)

**Let us understand this by an example**

```c
#include<stdio.h>
#define LENGTH 3

int data[LENGTH];

int main(int argc, char **argv)
{
    int i;
    int *pi;
    int **ppi;

    printf("multiple indirection example\n");

    for(i=0;i < LENGTH; i++)

    {
        data[i] = i;
    }
    for(i=0; i<LENGTH; i++)
    {
        printf("%d\n",data[i]);
    }
    pi = data;
    ppi = &pi;
    for(i=0; i<LENGTH; i++)
    {
        printf("\nloop [%d], array address is %p\n",i,data);
        printf("item pointed to by pi is %d\n", *pi);
        printf("Item pointed to by ppi is %p\n", *ppi);
        printf("item pointed to by double indirection of ppi is %d\n", **ppi);
        printf("The address of pi is %p and the value of pi(what it points to)is %p\n",&pi, ppi);
        pi += 1;
    }
    return 0;
}

```

![Pointers](https://github.com/tannuchoudhary/Pointers/blob/master/output2.PNG)



 

