#include <stdio.h>
#include <stdlib.h>

struct student {
	long long int number;
	char name[20];
	char surname[20];
	struct student *next;
};
typedef struct student node;

node* createList(node* head){
	int n, i;
	
	printf("How many student you want to add?\n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		node* newNode = (node*)malloc(sizeof(node));
		
		if(newNode==NULL){
			printf("Memory Error.\n");
			return head;
		}
		
		printf("Student number: ");
		scanf("%lld", &newNode->number);
		
		printf("Student name: ");
		scanf("%s", newNode->name);
		
		printf("Student surname: ");
		scanf("%s", newNode->surname);
		printf("\n");
		
		if(head==NULL || head->number > newNode->number){
			newNode->next = head;
			head = newNode;
		}
		else{
			node* current = head;
			while(current->next!=NULL && current->next->number < newNode->number){
				current= current->next;
			}
			newNode->next = current->next;
			current->next = newNode;
				
		}
	}
	
	return head;
	
}

node* searchList(node* head){
	long long int number;
	node* find = head;
	
	printf("What is the student number of student you want to find?\n");
	scanf("%lld", &number);
	
	while(find!=NULL){
		
		if(find->number == number){
			printf("%x\n", &find);
			return find;
		}
		else
			find = find->next;		
	}
	printf("Student not found.\n\n");
	return head;
}

void sortList(node* head){
	node* p = head;
	int i=1;
	if(head==NULL){
		printf("Thera are no student in the list.\n\n");
		return;
	}
	while(p!=NULL){
		printf("Student %d number: %lld\n", i, p->number);
		printf("Student %d name: %s\n", i, p->name);
		printf("Student %d surname: %s\n\n", i, p->surname);
		p = p->next;
		i++;
	}
	
	
}

int main(){
	node* head = NULL;
	int choose;
	
	while(1){
	printf("1- Create List.\n");
	printf("2- Search Student.\n");
	printf("3- Sort List.\n");
	printf("4- Exit.\n");
	printf("Choose an option: ");
	scanf("%d", &choose);
	
	switch(choose){
		case 1: head = createList(head);
			break;
		case 2: searchList(head);
			break;
		case 3: sortList(head);
			break;
		case 4: 
			exit(0);
		default:
			printf("Invalid choice!\n\n");
	}		
	}
	return 0;
}






