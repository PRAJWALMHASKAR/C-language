#include<stdio.h>
//this is the function which converts Fahrenheit to Celsius//
void temp(double fahrenheit)
{double celcius = ((5*(fahrenheit-32)/9));
printf("The temperature is %lf",celcius);} 
void main()
{
double temp_input;
printf("Please input the temperature in Fahrenheit:");
scanf("%lf",&temp_input);
temp(temp_input);
}