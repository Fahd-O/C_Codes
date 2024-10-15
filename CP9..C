#include<stdio.h>

//creating factoria funtion
int factorial(int a)
{
    int b, c = 1;
    for(b = 1; b <= a; b++)
    {
        c = c * b;
    }
    return c;
}

//creating combination function
int combination(int d, int e)
{
    return factorial(d) / ( factorial(d-e) * factorial(e));
}


int main()
{
    //factorial function testing
    int f;
    printf("\nEnter a number to get its factorial: ");
    scanf("%d", &f);

    printf("\nThe factorial of %d = %d\n\n", f, factorial(f));

    //combination function testing
    int g, h;
    printf("\nEnter two number to get their combination: ");
    scanf("%d %d", &g, &h);

    printf("\n%dC%d = %d\n\n", g, h, combination(g,h));

    return 0;
}