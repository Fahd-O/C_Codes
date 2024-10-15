#include<stdio.h>
int main()
{

    // for loop to print even numbers btw 10 & 100
     printf("Even\n");
    int count;
    for (count = 10; count <= 100; count++)
    {
        if( count % 2 == 0)
        { 
        printf("%d\n", count);
        }
    }

   
    // for loop to print even numbers btw 0 & 10
    //this for loop is more efficient
    printf("Even\n");
    for (count = 2; count <= 10; count+=2)
    {
        printf("%d\n", count);
    }

    // for loop to print odd numbers between 1 & 20
    printf("Odd\n");
    for (count = 1; count <= 20; count+=2) printf("%d\n", count);

    
}