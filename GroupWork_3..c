#include<stdio.h>


 /*void accept(string x)
    {
        int len = strlen(x);
        printf("%d", len);
    }
*/

int main()
{

   long long n;
   int count = 0;
   printf("enter an integer: ");
   scanf("%lld", &n);

   do{
       n /= 10;
       ++count;
   } while (n != 0);

   printf("number of digits: %d \n", count);

    return 0;
}