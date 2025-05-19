/*
 * this implementation defines these functions:
 * 1. Create node
 * 2. initialise linked list
 * 3. insert at beginning 
 * 4. insert at end 
 * 5. display list 
 * 6. free list 
 * */
#include<stdio.h>
#include <stdlib.h>

struct node {
	int data; 
	struct node* next;
};

struct linkedList {
	struct node* head;
};

//create node 
struct node* createNode(int value){
	struct node* newNode = (struct node*)malloc(sizeof(struct node)); newNode-> data = value;
	newNode->next = NULL;
	return newNode;
}

//initialise list
void initList(struct linkedList* list){
	list->head = NULL;
}

void insertBeginning(struct linkedList* list , int value){
	struct node* newNode = createNode(value);
	newNode->next = list->head;
	list->head = newNode;
}

void insertEnd(struct linkedList* list , int value){
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	if (list->head == NULL){
		list->head = newNode;
		return;
	}
	struct node* temp = list->head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next =  newNode;
}

void displayList(struct linkedList* list){
	struct node* temp = list->head;
	while(temp->next != NULL){
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

void freeList(struct linkedList* list){
	struct node* temp;
	while(list->head != NULL){
		temp = list->head;
		list->head = list->head->next;
		free(temp);
	}
}

int main(){
	struct linkedList list;
	initList(&list);
	insertBeginning(&list, 13);
	insertEnd(&list, 22 );
	insertBeginning(&list, 39);
	insertEnd(&list, 91);

	printf("Linked list: ");
	displayList(&list);

	freeList(&list);
	return 0;
}

