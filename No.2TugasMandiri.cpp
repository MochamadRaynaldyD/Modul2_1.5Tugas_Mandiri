#include <stdio.h>
#include <math.h>

#define PI 3.14159
int main()
{
	float diameter = 15.0;
	float radius, volume;
	
	//Hitung jari-jari bola
	radius = diameter / 2.0;
	
	//Hitung volume bola
	volume = (4.0 / 3.0) * PI * pow(radius, 3);
	
	printf("Volume bola dengan diameter %.2f cm adalah %.2f cm^3\n", diameter, volume);
	
	return 0;
	
	
}