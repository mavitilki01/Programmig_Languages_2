#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void createList(long long int no, char *name, char *depart){
	int count,i;
	FILE* file;
	if((file=fopen("file.txt","w")) == NULL){
		printf("No open file.");
		exit(1);
	}
	
	printf("How many students you want to create to list?\n");
	scanf("%d", &count);
	
	for(i=0;i<count;i++){
		printf("Student no: ");
        scanf("%lld", &no);

        printf("Student name: ");
        scanf("%s", name);

        printf("Student department: ");
        scanf("%s", depart);
		printf("\n");
		
        fprintf(file, "Student no: %lld\n", no);
        fprintf(file, "Student name: %s\n", name);
        fprintf(file, "Student department: %s\n", depart);
        fprintf(file, "\n");
	}
	fclose(file);
	
}
void adding(long long int no, char *name, char *depart){
	int count,i;
	FILE* file;
	
	if((file=fopen("file.txt","a")) == NULL){
		printf("No open file.");
		exit(1);
	}
	
	printf("How many students you want to add to list?\n");
	scanf("%d", &count);
	
	for(i=0;i<count;i++){
		printf("Student no: ");
        scanf("%lld", &no);

        printf("Student name: ");
        scanf("%s", name);

        printf("Student department: ");
        scanf("%s", depart);

        fprintf(file, "Student no: %lld\n", no);
        fprintf(file, "Student name: %s\n", name);
        fprintf(file, "Student department: %s\n", depart);
        fprintf(file, "\n");
	}	
	printf("\n");
	
	fclose(file);
}

void list(long long int no, char *name, char *depart){
	FILE* file;
	if((file = fopen("file.txt","r")) == NULL){
		printf("No open file.");
		exit(1);
	}

	while(!feof(file)){
	
		fscanf(file, "Student no: %lld\nStudent name: %s\nStudent department: %s\n\n", &no, name, depart);
        printf("Student no: %lld\n", no);
        printf("Student name: %s\n", name);
        printf("Student department: %s\n", depart);
        printf("\n");
	}
	fclose(file);
}

void search(long long int no, char *name, char *depart){
	char sname[15];
	FILE* file;
	if((file=fopen("file.txt","r"))==NULL){
		printf("No open file.");
		exit(1);
	}
	printf("What is the name of student who you want to find?\n");
	scanf("%s", sname);
	
	while(!feof(file)){	
		if(strcmp(sname, name)==0){
			fscanf(file, "Student no: %lld\nStudent name: %s\nStudent department: %s\n\n", &no, name, depart);
	        printf("Student no: %lld\n", no);
	        printf("Student name: %s\n", name);
	        printf("Student department: %s\n", depart);
	        printf("\n");
		}
	}
	fclose(file);
}

int main(){
	system("COLOR 3");
	int choose;
	long long int no;
	char name[15];
	char depart[30];


	while(1){
	printf("------------------------\n");
	printf("1- Creating files.\n2- Adding record\n3- Listing\n4- Search with name\n5- Exit.\n");
	printf("Choose one.");
	scanf("%d", &choose);
	printf("------------------------\n");
	
	switch(choose){
		case 1: createList(no, name, depart);
			break;
		case 2: adding(no, name, depart);
			break;
		case 3: list(no, name, depart);
			break;
		case 4: search(no, name, depart);
			break;
		case 5: exit(1);
			break;
	}
	
	}
	
	return 0;
}


