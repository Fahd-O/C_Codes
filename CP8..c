#include<stdio.h>

int square(int a)
{
    return a * a;
}

int main()
{
 //creating a function to square arguements entered
    int b = 5;
    printf("b = %d\n", b);

    int c = square(b);
    printf("c = %d\n", c);

    int d = square(3);
    printf("d = %d\n", d);

    printf("square of %d = %d\n", 4, square(4));

    return 0;
}