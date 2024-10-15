#include<stdio.h>
int main ()
{
    //finding sum of numbers
    int i;
    int sum = 0;
    for(i = 0; i <= 10; i++)
    {
       sum += i;
    }
    printf("\nsum of numbers between 1 and 10 is: %d\n", sum);

     //finding product of numbers a.k.a. factorial ! of a number
    int mut = 1;
    for(i = 1; i <= 10; i++)
    {
       mut *= i;
    }
    printf("\nproduct of numbers between 1 and 10 is: %d\n\n", mut);


    return 0;
}