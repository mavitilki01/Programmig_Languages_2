#include <stdio.h>
#include <string.h>


int main()
{
	char *name = "Feyza Gulen";
	char *p;
	
	p= (char *)malloc(12*sizeof(char));
	strcpy(p,name);
	
	printf("My name : %s", p);
	
	return 0;
}
