#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
	struct node* prev;
};

struct doublyLinkedList{
	struct node* head;
};

void initList(struct doublyLinkedList* list){
	list->head = NULL;
}

struct node* createNode(struct doublyLinkedList* list , int value){
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	if(!newNode){
		printf("ERROR: Memory Allocation Failed!");
		exit(1);
	}
	newNode->data = value;
	newNode->next = NULL;
	newNode->prev = NULL;

	return newNode;
}

void insertAtBeginning(struct doublyLinkedList* list , int value){
	struct node* newNode = createNode(list, value);

	newNode->next = list->head;

	if(list->head != NULL){
		list->head->prev = newNode;
	}
	list->head = newNode;
}

void displayList(struct doublyLinkedList* list){
	struct node* temp = list->head;
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void insertAtEnd(struct doublyLinkedList* list, int value){
	struct node* newNode = createNode(list, value);
	
	if (list->head == NULL){
		list->head = newNode;
		return;
	}
	else{
		//traverse to the last node 
		struct node* temp = list->head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
}

void insertByValue(struct doublyLinkedList* list , int target , int value){
	struct node* current = list->head;
	while(current != NULL && current->data != target){
		current = current->next;
	}

	if(current == NULL){
		printf("Target not found!\n");
		return;
	}

	struct node* newNode = createNode(list, value);
	newNode->next = current->next;
	newNode->prev = current;

	if(current->next != NULL){
		current->next->prev = newNode;
	}

	current->next = newNode;
}

void deleteFromFront(struct doublyLinkedList* list){
	if (list->head == NULL){
		printf("List is empty!\n");
		return;
	}

	struct node* temp = list->head; 

	list->head = list->head->next;

	if(list->head != NULL){
		list->head->prev = NULL;
	}

	free(temp);
}

void deleteFromEnd(struct doublyLinkedList* list){
	if(list->head == NULL){
		printf("List is empty!");
		return;
	}

	struct node* current = list->head; 

	if(current->next == NULL){
		free(current);
		list->head = NULL;
		return;
	}

	while(current->next != NULL){
		current = current->next;
	}
	current->prev->next = NULL;
	free(current);
}

void deleteByValue(struct doublyLinkedList* list , int target){
	if(list->head == NULL){
		printf("List is empty!");
		return;
	}

	struct node* current = list->head;

	while(current!= NULL && current->data != target){
		current = current->next;
	}
	if(current == NULL){
		printf("Target not found in list !");
		return;
	}
	if(current == list->head){
		list->head = current->next;
		if(list->head != NULL){
			list->head->prev = NULL;
			}
		else{
			current->prev->next = current->next;
			if(current ->next != NULL){
				current->next->prev = current->prev;
			}
			}
		}
	}
}

int main(){
	struct doublyLinkedList list;
	initList(&list);
	insertAtBeginning(&list, 30);
	insertAtBeginning(&list, 20);
	insertAtBeginning(&list, 10);
	displayList(&list);
}

