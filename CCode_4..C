#include<stdio.h>

int main()
{

	printf("\nNumber of Chickens for the day: ");

	int chicken;
	scanf("%i", &chicken);

	double dozen = (double) chicken / 12; //typecasting...

	printf("\nYou have '%f' Dozen Chickens.\n\n", dozen);

	return 0;
}
