// Linked list insert a node at the beginning
#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	int data;
	struct Node* next;
	
}Node;


void insertData(int x);
void printData();

struct Node* head;
void insertData(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	head = temp;
	// if(head != NULL) temp->next = head;
}

void printData()
{
	struct Node* temp =head;
	printf("List is:");
	while(temp !=NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	head = NULL;
	printf("Length of array\n");
	int numItems, i, num;
	scanf("%d", &num);

	for(i=0; i<numItems; i++)
	{
		printf("Enter the number \n");
		scanf("%d", &num);
		insertData(num);
		printData();
	}
}