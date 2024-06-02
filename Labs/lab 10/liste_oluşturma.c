#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[20];
	long long int number;
	int midterm;
	int final;
	float average;
	struct student *next;
};
typedef struct student node;


node* addRecord(node *head){
	int number,i;
	printf("how many student?\n");
	scanf("%d",&number);
	
	
    for(i=0;i<number;i++){
    	
	   	node *newNode = (node*)malloc(sizeof(node));
		
		if (newNode == NULL) {
	        printf("Memory Error!\n");
	        return head;
			}
			
	    printf("Student name: ");
	    scanf("%s", newNode->name);
	    
		printf("Student number: ");
	    scanf("%lld", &newNode->number);
		
		printf("Student midterm: ");
		scanf("%d", &newNode->midterm);
		
		printf("Student final: ");
		scanf("%d", &newNode->final);
		printf("\n");
		
		newNode->average= (newNode->midterm*0.4) + (newNode->final*0.6);	
		newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } 
		else {
			node* p= head;
            while (p->next != NULL) {
                p = p->next;
            }
            p->next = newNode;
        }
		
	}
	return head;
    
}

void listRecord(node *head){
	int i=1;
	node *p=head;

	while(p!=NULL){
	
	    printf("Student %d name: %s\n", i, p->name);	    
		printf("Student %d number: %lld\n", i , p->number);	
		printf("Student %d midterm: %d\n", i, p->midterm);	
		printf("Student %d final: %d\n", i, p->final);
		printf("Student %d average: %.2f\n", i, p->average);
		printf("\n");
		i++;
		p=p->next;
	
		
	}
}


node* update(node* head){
	long long int number;
	node* p =head;
	printf("Enter the student number of the student you want to update: ");
	scanf("%lld", &number);
	while(p!=NULL){
		if(number==p->number){
			printf("Student name: ");
		    scanf("%s", p->name);
		    
			printf("Student number: ");
		    scanf("%lld", &p->number);
			
			printf("Student midterm: ");
			scanf("%d", &p->midterm);
			
			printf("Student final: ");
			scanf("%d", &p->final);
			printf("\n");
			
			p->average = (p->midterm * 0.4) + (p->final * 0.6);
			
			return head;
		}
		p=p->next;
	}
	printf("Student not found.");
	return head;
}

void classAverage(node* head){
	float sum=0.0f, average;
	int i=0;
	node* p=head;
	
	while(p!=NULL){
		sum+= p->average;
		i++;
		p=p->next;
	}
	if(i>0){
		average=sum/i;
		printf("Class average: %.2f\n\n", average);
	}
	else
		printf("There are no students in the class.\n");
	
	
}

void bestAverage(node* head){
	
	if(head==NULL){
		printf("There is no student int he class.\n");
		return;
	}
	
	float best;
	node* p = head;
	best=p->average;
	
	while(p!=NULL){
		if(best<p->average){
			best=p->average;
			p=p->next;
		}
		else
			p=p->next;
	}
	printf("------Best Student Record According to Average------");
	 	printf("Student name: %s\n", p->name);	    
		printf("Student number: %lld\n", p->number);	
		printf("Student midterm: %d\n", p->midterm);	
		printf("Student final: %d\n", p->final);
		printf("Student average: %.2f\n", p->average);
	
}

int main(){
	int choose;
	node *head=NULL;
	
	while(1){
		printf("1- Add New Record\n");
		printf("2- List Records\n");
		printf("3- Update Record\n");
		printf("4- Calculate Class Average\n");
		printf("5- Show Best Student Record According to Average\n");
		printf("6- Exit\n");
		printf("Choose one: ");
		scanf("%d", &choose);
		
		switch(choose){
			case 1: head= addRecord(head);
					break;
			case 2: listRecord(head);
					break;
			case 3: head = update(head);
				break;
			case 4: classAverage(head);
				break;
			case 5: bestAverage(head);
				break;
			case 6: exit(0);
			default:
                printf("Invalid choice! Try again.\n");
		}
	}
	
	return 0;
}



