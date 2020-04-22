#include <stdio.h>

/* we need lowest bounds, highest, steps, fahr, and celsius. */
main()
{
// declaration
float fahr, celsius;
int lowest, highest, step;

//assignent 
lowest = 0;
highest = 300;
step = 20;

fahr = lowest; 

printf("Fahrenheit & Celsius Table\n");
while (fahr <= highest) {
	celsius = (5.0/9.0) * (fahr - 32);
	printf("%3.0f %.4f \n", fahr, celsius);
	fahr = fahr + step;
 }
}
