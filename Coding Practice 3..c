#include<stdio.h>
int main()
{
    //while loop to print suitable numbers
    int w = 1;
    while(w <= 20)
    {
        printf("%d, ", w);
        w += 2;
    }

printf("\nfinal value of 'w' at the end of whie loop is %d\n", w);
    return 0;
}