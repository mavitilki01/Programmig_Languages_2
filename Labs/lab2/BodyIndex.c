#include <stdio.h>
#include <stdlib.h>


float bodyIndex(float w, float h);

void main()
{
	float weight, height;
	int bodyindex;
	
	printf("Enter your weight: ");
	scanf("%f", &weight);
	printf("Enter your height: ");
	scanf("%f", &height);
	
	bodyindex = bodyIndex(weight, height);
	
	switch (bodyindex)
	{
		case 1:
			printf("Your state is weak.");
			break;
		case 2:
			printf("Your state is normal.");
			break;
		case 3:
			printf("Your state is fat.");
			break;
		default:
			printf("Your state is obese.");
			break;
	}
}

float bodyIndex(float w, float h)
{
	
	float index = w/(h/100*h/100);
	
	
	if (index>0 && index<=18)
		return 1;
	else if (index>18 && index<=25)
		return 2;
	else if (index>25 && index<=30)
		return 3;
	else
		return 4;
}		
		
		
		
		
		
		
