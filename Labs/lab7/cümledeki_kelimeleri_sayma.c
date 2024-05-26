#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *text, *orj;
	int count=0;
	
	text=(char*)malloc(100*sizeof(char));
	
	printf("Enter a text: ");
	gets(text);
	orj= text;
	
	while(*text!='\0'){
		
		text++;
		if(*text==' ' || *text =='\0'){
		count++;
		}	
		
	}
	printf("How many words = %d ", count);
	
	free(orj);
	return 0;
		
	}
	

