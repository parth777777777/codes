#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
	int data;
	struct Node* next;
}*first = NULL;

void create(int a[], int n){
	int i; 
	struct Node *t , *last;
	first = (struct Node* )malloc(sizeof(struct Node));
	first->data = a[0];
	first-> next = NULL;
	last = first;

	for(i = 1; i < n; i++){
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = a[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void display(struct Node* t){
	while (t!= NULL){
		printf("%p : %d \n",t,t->data);
		t= t->next;
	}
	printf("\n");
}

int main(){
	int a[] = {3,5,1,6,7,13,81};
	create(a,7);
	display(first);
	return 0;
}
