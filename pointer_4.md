# INDIRECTION AND COMMAND LINE ARGUMENTS

**Ways to run your program:**
* By using IDE
* By double click
* using command line

We all know to run our programs through IDE, whatever IDE you use, just open the IDE, write your code and click on compile and run,
it is so easy and also we can run our programs by opening the folder and just double clicking on the program but the thing is that we cannot pass arguments through main by these methods.

But, by running your program through command line argument you can pass values through main

if you don't know how to run a program through command line argument, you can visit my blog by clicking [here](technique7.wordpress.com/2018/09/22/how-to-compile-and-run-a-program-through-command-line-argument/).

When we pass arguments, the answer is while calling or definning a function, so we all know that main is also a function but, who calls main, the answer is operating system.yes, operating system calls main and we are definning main by writting our code.

So now how to pass arguments through main

first of all, while writting code you have to define main something like this

`main(int argc, char argv)`

**argc** stands for argument count and **argv** stands for argument vector.

argc contains the count of number of arguments you pass through while running your program and argv contains the strings i.e all the variables which you are passing, it includes the name of your program and all the values which you are passing.

After reaching to the command prompt type the name of your program and enter the values you want to pass through main.

You can also print your arguments which you have passed, just take a look at this program

```c
#include<stdio.h>
 void main(int argc, char **argv[])
{
    int i;
    for(i=0; i<argc; i++)    
        printf("%d  %s\n", i, argv[i]);
}

```

In command prompt write the name of your program and write your strings, here the name of my program is **command_line**, and i am passing arguments as github, repository, pull_request, commit so we have to write like this

`C:\Users\user\Desktop\tannu\Tannucommand_line github repository pull_request commit`

Your output will look something like this

```c
0  command_line
1  github
2  repository
3  pull_request
4  commit
```

let us take another example

```c
#include<stdio.h>
#include<stdlib.h>

void main(int argc, char * argv[]) {
   int i, sum = 0;

   if (argc != 3) {
      printf("You have forgot to type numbers.");
      exit(1);
   }

   printf("The sum is : ");

   for (i = 1; i < argc; i++)
      sum = sum + atoi(argv[i]);    //atoi function is used to convert string into integers.

   printf("%d", sum);

}

```
and your output will be something like this :

![output](https://github.com/tannuchoudhary/pointer_images/blob/master/p1.PNG)

here the name of my program is practice.c and arguments are 5 and 4.

To know more about `atoi()` function click [here].(https://www.quora.com/What-is-an-atoi-function-in-C-programming)


# GENERIC POINTERS

We know that to use pointers we have to assign a pointer with specific data type but what if we want to write code that can deal with any type of data.

In this case we will use generic pointers 

* Generic pointer works same as pointer.
* Just write void while declaring the generic pointer.
* Now you don't need to create pointers of different datatypes, you can use single pointer for different datatypes just by casting it into that particular data type.

```c
#include<stdio.h>
int main()
{
    void *ptr;
    int i = 5;
    char c = 'c';
    ptr = &i;
    
    //The cast tells the compiler what the address type is
    
    printf("Item pointed by pointer is %d and address is %p.\n", *(int*)ptr, ptr);  //casting into type int.

    ptr = &c;
    printf("Now, item pointed by pointer is %c and address is %p.", *(char*)ptr, ptr);  //casting into char type

    return 0;
}
```
We can use a single generic pointer to point any kind of datatype.









