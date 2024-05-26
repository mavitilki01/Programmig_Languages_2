#include <stdio.h>
#include <string.h>


int main()
{
	int same, length1, length2;
	char *first, *second;
	
	first = (char*)malloc(10*sizeof(char));
	second = (char*)malloc(10*sizeof(char));
	
	if (first == NULL || second == NULL) {
        printf("Bellek ayýrma hatasý!\n");
        return -1;
    }
	printf("Enter first word: ");
	scanf("%s", first);
	printf("Enter second word: ");
	scanf("%s", second);
	
	same = strcmp(first,second);
	if(same==0)
	{
		printf("They are same.");
		return 0;
	}
	
	else
		{
		length1 = strlen(first);
		length2 = strlen(second);
		
		if(length1>length2)
		{
			printf("%s is longer then %s", first, second);
		}
		else if(length2>length1)
		{
			printf("%s is longer then %s", first, second);
		}
		else{
			printf("they have same length.");
		}
			
		
		}

	free(first);
	free(second);
	
	return 0;
}



