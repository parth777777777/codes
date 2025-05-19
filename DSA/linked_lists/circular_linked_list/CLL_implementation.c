#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	int data;
	struct node* next;
};

struct circularLinkedList{
	struct node* tail;
};

void initList(struct circularLinkedList* list){
	list->tail = NULL;
}

struct node* createNode(struct circularLinkedList* list , int value){
	struct node* newNode = (struct node*)malloc(sizeof(struct node*));
	if (!newNode){
		printf("Memory allocation failed\n");
		exit(1);
	}
	newNode->data = value;
	newNode->next = NULL;
	return newNode;
}

void insertEnd(struct circularLinkedList* list , int value){
	struct node* newNode = createNode(list,value);

	if(list->tail == NULL){
		list->tail = newNode;
		newNode->next = newNode;
	}
	else{
		newNode->next = list->tail->next; //head
		list->tail->next = newNode;
		list->tail = newNode;
	}
}

void deleteFront(struct circularLinkedList* list){
	if(list->tail == NULL){ //empty
		printf("List is empty!\n");
		return;
	}
	else{
		struct node* head = list->tail->next; 

		if(head == list->tail){  //only one node
			free(head);
			list->tail= NULL;
		}
		else{
			list->tail= head->next;
			free(head);
		}
	return;
	}
}

void displayList(struct circularLinkedList* list){
	if(list->tail == NULL){
		printf("List is empty!\n");
		return;
	}

	struct node* temp = list->tail->next;
	do{
		printf("%d-> ",temp->data);
		temp = temp->next;
	}
	while(temp != list->tail->next);
	printf("\n");

}

int main(){
	struct circularLinkedList list;
	initList(&list);
	insertEnd(&list, 12);
	insertEnd(&list, 22);
	insertEnd(&list, 32);
	insertEnd(&list, 42);
	insertEnd(&list, 52);
	displayList(&list);
	deleteFront(&list);
	displayList(&list);

}
