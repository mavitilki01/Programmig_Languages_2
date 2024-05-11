#include<stdio.h>
#include <string.h>


void main()
{
	char array1[50];
	char array2[50];
	char *p;
	int len1, len2, len_tot;
	
	printf("Enter first string: ");
	gets(array1);
	len1= strlen(array1);
	
	printf("Enter second string: ");
	gets(array2);
	len2= strlen(array2);
	
	len_tot= len1 + len2;
	
	p=(char*)malloc((len_tot+2)*sizeof(char));
	strcpy(p, array1);
	strcat(p, " ");
	strcat(p, array2);
	
	printf("Combines character: %s", p);
}

