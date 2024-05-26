#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int i, length, j, k;
	char *p;
	char *word;
	char *original;
	
	p = (char*)malloc(100*sizeof(char));
	word = (char*)malloc(50 * sizeof(char));
	
    if (p == NULL || word == NULL) {
        printf("Bellek ayýrma hatasý!\n");
        return -1;
    }
    
	printf("Enter a sentence: ");
	gets(p);
	printf("which word do you want to find in sentence: ");
	gets(word);
	length=strlen(word);
	printf("word length you want to find: %d\n", length);
	original = p;
	while(*p!= '\0')
	{
		while (*p == ' ' && *p != '\0') {
            p++;
        }
        
		j=0;
		k=0;
		for(; *p!=' ' && *p!= '\0'; p++){
			k++;
		}
		
		printf("every word length: %d\n", k);
		p-=k;
		
		if (k == length) {
           
			for(i=0; i<length && j<k ; i++, j++){ 
				
				printf("j= %d -- i= %d -- p= %c -- w= %c\n", j, i, *(p+j), *(word+i));
				
				if(*(p+j) != *(word+i))
				{
					break;
				}
				
				if(i==(length-1) && j==(k-1)){
					printf("Address= %p\n", *p);
					}
			}
		}
		
		p+=k;
		
		while (*p == ' ' && *p != '\0') {
            p++;
        }
	}
	
	free(original);
	free(word);
}

