#include <stdio.h>
#include <string.h>


int main()
{
	char *name = "Feyza ";
	char *surname = "Gulen";
	char *p;
	
	p= (char *)malloc(6*sizeof(char));
	strcpy(p,name);
		printf("My name : %s\n", p);
	
	p= realloc(p, 12*sizeof(char));
	strcat(p,surname);
	
	
	printf("My name : %s", p);
	
	return 0;
}

