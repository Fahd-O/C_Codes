#include<stdio.h>

int main ()
{
    int a,b,c,d,e;

    scanf("%d,%d,%d,%d,%d", &a, &b, &c, &d, &e);
    if(a!=0 && b!=0 && c!=0 && d!=0 && e!=0){
        float avg = (a+b+c+d+e)/5.0;
        printf("%f", avg);
    }

    return 0;
}