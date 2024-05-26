#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char *name1, *name2, *surname1, *surname2;
	int length1, length2, areSame;
	
	name1= (char*)malloc(20*sizeof(char));
	name2= (char*)malloc(20*sizeof(char));
	surname1= (char*)malloc(20*sizeof(char));
	surname2= (char*)malloc(20*sizeof(char));
	
	
	strcpy(name1, "Feyza");
	strcpy(name2, "Rabia");
	strcpy(surname1, "Gülen");
	strcpy(surname2, surname1);
	
	length1 = strlen(surname1);
	length2 = strlen(surname2);
	
	strcat(name1, surname1);
	strcat(name2, surname2);
	
	areSame= strcmp(surname1,surname2);
	
	if(length1=length2){
		if(areSame==0)
			printf("They are relative.");
			
	}
	
	return 0;
}
