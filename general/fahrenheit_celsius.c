#include<stdio.h>

int main()
{
	float fahrenheit=0.0, celsius=0.0;
	
	printf("Enter a Fahrenheit temperature: ");

	scanf("%f",  &fahrenheit);

	celsius = fahrenheit - 32.0f;
	celsius = celsius * 5.0f / 9.0f;

	printf("That equals %f degrees Celsius.", celsius);

}

