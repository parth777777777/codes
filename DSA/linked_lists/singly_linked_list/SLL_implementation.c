#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int data; 
	struct node* next;
};

struct linkedList {
	struct node* head;
};

void initList(struct linkedList* list){
	list->head = NULL;
}

struct node* createNode(int value){
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	newNode->next = NULL;
	return newNode;
}


int countNodes(struct linkedList* list){
	if(list->head == NULL) return 0;
	struct node* temp = list->head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

int sum(struct linkedList* list){
	if(list->head ==NULL){
		printf("List is empty!\n");
		return -1;
	}
	struct node* temp = list->head;
	int sum = 0;
	while(temp != NULL){
		sum+=temp->data;
		temp = temp->next;
	}
	return sum;
}

int findMax(struct linkedList* list){
	if(list->head == NULL){
		printf("Linked list is empty!\n");
		return -1;
	}
	struct node* temp = list->head;
	int max = temp->data;
	while(temp->next != NULL){
		temp= temp->next;
		if(temp->data > max) max = temp->data;
	}
	return max;
}

void insertBeginning(struct linkedList* list , int value){
	struct node* newNode = createNode(value);
	newNode->next = list->head;
	list->head = newNode;
}

void insertEnd(struct linkedList* list , int value){
	struct node* newNode = createNode(value);
	if (list->head == NULL){
		list->head = newNode;
		return;
	}
	struct node* temp  = list->head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

void insertAtPosn(struct linkedList* list , int index , int value){
	struct node* newNode = createNode(value);
	if(index<0 || index> countNodes(list)){
		return;
	}
	newNode->data= value;
	if(index == 0){
		newNode->next = list->head;
		list->head= newNode;
	}
	else{
		struct node* temp = list->head;
		for(int i =0 ; i<index-1 ; i++){
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
}

int deleteNode(struct linkedList* list, int index){
	struct node* p ;
	struct node* q = NULL;
	int x = -1;
	//deleting first node
	if(index <1 || index> countNodes(list)){
		return -1;
	}
	if(index == 1){
		p = list->head;
		list->head = list->head->next;
		x = p->data;
		free(p);
		return x;
	}
	else{
		p = list->head;
		for(int i = 0 ; i<index-1 ; i++){
			q=p;
			p=p->next;
		}
		q->next = p->next;
		x = p->data;
		free(p);
		return x;
	}

}

void displayList(struct linkedList* list){
	struct node* temp = list->head;
	while(temp != NULL){
		printf("%d ->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

void reverseElements(struct linkedList* list){
	struct node* temp = list->head;
	int A[countNodes(list)];
	int i = 0;
	while(temp != NULL){
		A[i++] = temp->data;
		temp = temp->next;
	}
	temp = list->head;
	i--;
	while(temp != NULL){
		temp->data = A[i--];
		temp = temp->next;
	}
}

void reverseLinks(struct linkedList* list){
	struct node* p = list->head;
	struct node* q = NULL;
	struct node* r = NULL;
	while(p!=NULL){
		r=q;
		q=p;
		p= p->next;
		q->next = r;
	}
	list->head = q;
}
int main(){
	struct linkedList list;
	initList(&list);
	insertBeginning(&list, 232);
	insertBeginning(&list, 21);
	insertBeginning(&list, 82);
	insertBeginning(&list, 61);
	insertBeginning(&list, 95);
	insertBeginning(&list, 136);
	displayList(&list);
	printf("The deleted node contained this value : %d \n" , deleteNode(&list, 2));
	displayList(&list);
	reverseElements(&list);
	displayList(&list);
	reverseLinks(&list);
	displayList(&list);
}
