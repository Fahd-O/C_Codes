#include<stdio.h>
int main()
{
    //do while loop to print odd numbers between 11 and 20 
    int d = 11;
    do
    {
        printf("%d, ", d);
        d += 2;
    }
    while(d <= 20);

    return 0;
}