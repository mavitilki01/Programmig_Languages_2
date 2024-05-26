#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *text, c;
	int i, count=0, length;
	
	text=(char*)malloc(100*sizeof(char));
	printf("Enter a text: ");
	gets(text);
	
	length= strlen(text);
	
	for(c='a'; c<='z'; c++){
		
		for(i=0; i<length;i++){
			if(text[i]==c)
				count++;		
		}
		printf("%c = %d\n",c, count);
		count=0;
	}
	
	free(text);
}
