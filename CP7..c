#include<stdio.h>
int main()
{
    
        long int g;
        printf("\nEnter a number to check if it is a prime or not: ");
        scanf("%ld", &g);

        int factor = 0;
        long int h;
        for(h=1; h <= g; h++)
        {
            if(g % h == 0) factor++;
            if(factor > 2) break;
        }
        if (factor == 2) printf("\n%ld is a prime number\n", g);
        else printf("\n%ld is not a prime number\n", g);
        

        return 0;
}