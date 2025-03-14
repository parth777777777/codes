#include<stdio.h>
//define max stack capacity
#define MAX 5

//creating a struct to store the array for the stack and a variable which holds the index of the top most entry in that array 
struct stack {
	int arr[MAX];
	int top;
};

//initializing stack by setting top to be -1 , youll understand why in push function.
// also we are passing a pointer of data type struct stack as the function paramater just to make it clear
void initialize(struct stack* stack){
	stack->top = -1 ;
}

//checks if stack is empty by comparing the top variable (which updates when we push an element in the stack) if its equal to -1 , aka empty condition . if the equation is true , we return 1, else 0.
int isEmpty(struct stack* stack){
	return stack->top == -1;
}

//checks if full
int isFull(struct stack* stack){
	return stack->top == MAX-1;
}

//push an element into the stack 
void push(struct stack* stack, int data){
	if(isFull(stack)) {
		printf("Stack overflow\n");
		return;
	}
	else {
		//++stack->top means that we increment top variable by 1 before using it in the equation . if it was stack->top++ that would mean we used top variable as it was during the staement and then we increment it by 1 . 
		stack->arr[++stack->top] = data;
		printf("data pushed\n");
		return;
	}
}

int pop(struct stack* stack){
	if(isEmpty(stack)) {
		printf("Stack underflow\n");
		return -1;
	}
	return stack->arr[stack->top--];
}

int peek(struct stack* stack){
	if(isEmpty(stack)){
		printf("Stack is empty\n");
		return -1;
	}
	return stack->arr[stack->top];
}

void display(struct stack* stack){
	if(isEmpty(stack)) {
		printf("Stack is empty\n");
		return;
	}
	printf("Stack : ");
	for(int i = 0 ; i<= stack->top ; i++){
		printf("%d ",stack->arr[i]);
	}
	printf("\n");
}

int main(){
	struct stack s;
	initialize(&s);
	push(&s,10);
	push(&s,10);
	push(&s,10);
	push(&s,10);
	push(&s,10);
	push(&s,10);
	pop(&s);
	display(&s);
}
