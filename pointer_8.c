/* Write a program in C to print all permutations of a given string using pointers.
Expected Output :
The permutations of the string are :
abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda
bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  dbca  dbac
dcba  dcab  dacb  dabc/*



*/
#include<stdio.h>
#include<string.h>

void swap(char *ch1, char *ch2)    /*Standard method of swapping*/
{
    char ch;
    ch = *ch1;
    *ch1 = *ch2;
    *ch2 = ch;
}
void permutation(char *ch, int i, int n)      /*Here i is the first index of a string and n is the last index of a string */
{
    static int count;                         /*static var initialize from zero*/
    int j;
    if(i == n)
    {
        count++;
        printf("(%d) %s\t", count, ch);
    }
    else
    {
        for(j=i; j<=n; j++)
        {
           swap((ch+i), (ch+j));
           permutation(ch, (i+1), n);       /*Recursion, as we are calling permutation
                                              function again by changing i to (i+1)*/

           swap((ch+i), (ch+j));            /*Backtracking.*/
        }
    }
}
int main()
{
    char str[] = "abcd";

    printf("the permutation of a string are :");
    int n = strlen(str);
    permutation(str , 0, n-1);            /*function calling by passing arguments*/
    return 0;
}


