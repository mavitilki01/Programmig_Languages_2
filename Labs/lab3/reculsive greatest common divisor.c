#include <stdio.h>
#include <stdlib.h>


void main()
{
	int n1, n2;
	printf("Enter two numbers: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	printf("Greatest common divisor: %d", ebob(n1,n2));
	
}

int ebob(int a,int b)
{
	if (a==0)
	return b;
	if (b==0)
	return a;
	
	return ebob(b, a%b);
		
}
