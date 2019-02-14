# Pointers
## This section contains notes on pointers.
### Pointer basics
>We don't need to study pointers in many languages or we we will come across pointer in very rare case in languages like Ruby, python, c# etc, as these languages use pointers but they hide it from users because of several reasons, but there is no way of escaping out from pointers in c. so we will study some concepts of pointers.
>so let's get to the point

#### _What exactly pointer is?_

>_pointer is a variable that refers to or points to an address in your computer's memory._

* simply we can think pointer as a container which contains/stores something.
* contains what? Ans-it contains adresses.
* whose address? Ans- Address of any value, that value can be int, char, float or any data type.
* And the pointer also have their own adresses(right now, no need to think about that.).


#### _what is an address?_

>_In computer memory, location where bits of data is stored or the position in the memory where some piece of data is stored is called an address._
* lets assume a computers memory as a series of location and bits of data is stored in each location, that location is called an address. * so to find a specific piece of data in memory we have to find the address where the data is stored and this is what the pointer does.  
* We can access data stored in that location by the help of pointer variable.
* keep in mind that pointer variable does not contain the original data, it only contains the address of the original data.(The address of the location where the original data is stored.)
* we can also change the data stored in that location 

### _Now coming to the declaration of pointer_
>Now the question arises that how we will recognise a pointer variable or how we will differentiate between a pointer and a non pointer variable, for thatlet me tell you that the declaration of pointer variable is different from the declaration of normal variable or a non pointer variable.
we declare a normal int variable something like this:-

int main()
<br>  {
<br>    int num;
<br>  }

But for declaring a pointer we have to use an asterisk symbol, it is also called an indirection operator something like this:
int main()
<br>  {
<br>    int *num;
<br>  }
 
 or we can also write it like this:
  int main()
<br>   { 
<br>     int* num;
<br>   }
>Notice the position of asterisk, it doesn't matter where you put the asterisk symbol you can put it just after the datatype or after giving the space as both of the syntax are valid.
  
  
  
  
  
  
