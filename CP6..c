#include<stdio.h>
int main()
{
    int i;
    long long int mut = 1;
     int n;
     printf("Enter a whole number to get its factorial: ");
     scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
       mut *= i;
    }
    printf("\nfactorial of %d is: %lld\n\n", n,mut);

    return 0;
}