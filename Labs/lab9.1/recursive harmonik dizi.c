#include <stdio.h>
#include <stdlib.h>
float harmonic(float n);

int main(){
float n;
float total;
printf("Enter n=");
scanf("%f", &n);
total = harmonic(n);
printf("The total = %f", total);

}

float harmonic(float n){
	if(n==1)
		return 1;
	else 
		return 1/n + harmonic(n-1);
}

