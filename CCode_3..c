#include <stdio.h>

int main()
{
	//Getting Input from user...
 
	int x = 10; //this is hard coding. the variable's value is pre-assigned

	int Radius;
	
	printf("Please enter a value for the radius of a Circle: ");
	scanf("%i", &Radius); //address-of operator

	double area = (22.0/7) * (Radius * Radius);

	printf("\nThe Area of the Circle with Radius '%i' is: %f\n\n", Radius, area);

	return 0;
}

