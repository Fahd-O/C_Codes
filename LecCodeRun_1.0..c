#include<stdio.h> //directive statements begins with "#" and are instruction acted upon and not printed

int main () //this is an example of a function, it is the "main function" where execution of codes begin from, regardless of where it is located in a C code and must be part of every C code. A C program must have atleast one function which is the main function atleast
{
    printf("\nbismi llahi rahmaani raheem\n\n");

    int f = 10;
    int g = 25;
    int h = 55;
    int i = adder(f,g,h);

    printf("The addition of %d, %d and %d = %d\n", f, g, h, i);

    return 0;
}

/*
int power (int a, int b)//this is also a funtion, but this funtion takes parameters
{
    //codes go here
}
*/

int adder(int c, int d, int e)
{
    return c + d + e;
}