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
## Multiple indirection with an array:

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


## Multiple indirection with strings:
```c
#include<stdio.h>

#define LENGTH 3

char *words[LENGTH];   /*any string*/

int main(int argc, char **argv)

{

    char *pc;        /*pc is a pointer to a variable char
     A pointer variable pointing to a character variable, this is one level of indirection i.e it
    can only point to a variable, if we have to write a  pointer( with single level of indirection) in terms of a non pointer variable
     then we will use an asterisk symbol for dereferencing and we will get the value of the variable to which the pointer is pointing. */



    char **ppc;      /*ppc is a pointer to a pointer to a variable char.
    A pointer variable pointing to a pointer variable which is pointing to a character variable, this is two level of indirection i.e
    it points to a pointer which points to a variable, and if we have to write this in terms of non pointer variable then we will use two asterisks
    symbols for dereferencing and we will get the value of the variable to which the pointer is pointing to which this pointer is pointing.*/


    printf("Multiple indirection example :\n");
    words[0] = "zero";
    words[1] = "one";
    words[2] = "two";


    for(int i=0; i<LENGTH; i++)    /*iterating through the strings*/
    {
        printf("%s\n", words[i]);
    }


    printf("Now print the characters in each string :\n");

    ppc = words;                  /*storing the address of a a first element of string in ppc*/

    for(int i=0; i<LENGTH; i++)   /*iterating through the characters*/
    {
        ppc = words +i;

        pc = *ppc;                /*dereferencing ppc with one level and storing it in pc*/

        while(*pc != 0)           /*as null character is automatically appended to the last of the string */

        {
            printf("%c  ", *pc);  /*printing the characters along with double space by dereferencing the pc, this is how we will get
                                     the character to which pc is pointing */

            pc += 1;              /*incrementing pc with one*/
        }

        printf("\n");

    }

    return 0;

}

```
![pointer_with_strings](https://github.com/tannuchoudhary/pointer_images/blob/master/strings.PNG)



 

