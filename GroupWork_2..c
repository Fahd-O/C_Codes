#include <stdio.h>

int main()
{

    int a;

    printf("Enter a number");
    scanf("%d", &a);

    int b;

    for(b=1; b<=99; b++)
        {
            int c;
            printf("Enter another number");
            scanf("%d", &c);
            if(c>a)
                {
                    a=c;
                }
        }


    printf("%d",a);

    return 0;
}