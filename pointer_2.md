# pointers
## The relationship between pointer and array(or strings).
* Arrays in c are the sequence of data stored somewhere in memory.
* And strings are just an array of characters.
* The address of the first element of an array is the address of the array.
* The name you give to the array variable is also the address of the array.
>In simple words array is the same as an address in memory that defines the beginning of sequential  
data itemms and dealing with an  array is  same as dealing with an addresses.
<br>_Let us take an example_
```c

#include<stdio.h>
int main(int argc, char **argv)
  {  
      char str1[] = "Hello world";
      printf("%s %c %d %d %d\n", str1, str1[0], &str1, &str1[0], str1);
      return 0;
  }
```
and our output will be something like this

`Hello world H 2686740 2686740 2686740`

so what is happening? in first part the whole string is getting printed i.e **Hello world** and in second part the first character is getting printed i.e **H**, you can notice that the address of the whole string and address of the first element of a string is same as i had told u earlier that the address of the first element of an array is the address of an array.(an string is an array of characters)

Now what is the scene with the last one, that is the value of an array and this is also the same as the address of an array.

Now this will be little confusing for you 

>A pointer  is a container for containing an address but an array is itself an address.
we can understand this by an example, let's assume i have a paper with an address of my house written over it, that paper is a pointer which is containing the address of my house and is not exactly the house, on the other hand lets assume another house of yours then the address of that house is an address of an array i.e the real address.

Thats why we say that the pointer variable contains an address and an array variable is the address of an array.

```c
#include<stdio.h>
int main(int argc, char **argv)
{
  char str1[] = "Hello";
  char *str2 = "world";
  printf("%p %d %d\n", &str1, str1, str1);
  printf("%p %d %d", &str2, str2, str2);
  return 0;
}
```
output:
```
6356746 6356746 Hello
6356740 4206628 world
```
Here you can notice that in case of array, address and value is same and in case of pointer, address and value is different.

---

## Format specifier for pointers

Sometimes we use %d, sometimes %u and sometimes we use %p as a format specifier, so what is the difference between them.Let us understand by an example.
```c
#include<stdio.h>

int main(int argc, char **argv)
{
    char str[] = "Tannu";
    printf("%d %u %p", &str, &str, &str);
    return 0;
}

```
and your output will be something like this

`6356746 6356746 0060FF0A`

### First of all understanding the difference between %d and %u:

%d gives the signed integer while %u gives an unsigned integer.This means that %u will never give u a negative value.

### Now the difference between %d and %p:

 %p is considered to be the standard format specifier for pointers and it displays the value in hexadecimal format and if you can read the normal value into hexadecimal then you can use %d as it does not represent the values in hexadecimal format.
 
 ```c
 #include <stdio.h>

int main(int argc, char **argv)
{
     int *p;
     int a[] = {100,200,300,400};
     p = a;
     for (int i = 0; i < 4; i++)
        {
             printf("Value = %d, Address = %p\n", *p, p);
             p = p + 1;
        }
}
```
output:
```
Value = 100, Address = 0028FF08 
Value = 200, Address = 0028FF0C 
Value = 300, Address = 0028FF10 
Value = 400, Address = 0028FF14 

```
*This one is in hexadecimal format.*

**and look at this one**

```c
#include <stdio.h>

int main(int argc, char **argv)
{
     int *p;
     int a[] = {100,200,300,400};
     p = a;
     for (int i = 0; i < 4; i++)
        {
             printf("Value = %d, Address = %d\n", *p, p);
             p = p + 1;
        }
}

```
*I have only changed the format specifier from %p to %d*

output:
```
Value = 100, Address = 2686728 
Value = 200, Address = 2686732 
Value = 300, Address = 2686736 
Value = 400, Address = 2686740 

```


















































