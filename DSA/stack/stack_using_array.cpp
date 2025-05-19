#include<stdio.h>

struct Stack{
	int size;
	int top;
	int* S;
}st ;

void create(struct Stack* st){
	printf("Enter size of stack : ");
	scanf("%d", &st->size);
	st->top = -1;
	st->S = new int[st->size];
}

void display(struct Stack st){
	printf("Stack contains : \n");
	for(int i = st.top ; i>-1 ; i--)
		printf("%d ",*(st.S+i));
	printf("\n");
}

void push(struct Stack* st , int n){
	if(st->top==st->size-1) {
		printf("Stack overflow\n");
		return;
	}
	st->S[++st->top] = n;
}

int pop(struct Stack* st){
	if(st->top == -1){
		printf("Stack underflow\n");
		return -1;
	}
	return st->S[st->top--];
}

int isEmpty(struct Stack st){
	if(st.top == -1) return 1;
	return 0;
}

int isFull(struct Stack st){
	if(st.top == st.size-1) return 1;
	return 0;
}

int peek(struct Stack st , int index){
	if(st.top + index + 1 < 0 ){
		printf("invalid index\n");
		return -1;
	}
	return st.S[st.top- index +1];
}

int stackTop(struct Stack st){
	if(!isEmpty(st))
		return st.S[st.top];
	return -1;
}


int main(){
	create(&st);
	push(&st, 23);
	push(&st, 23);
	push(&st, 23);
	display(st);
	printf("Popped value is : %d\n", pop(&st));
	display(st);
	printf("at top : %d\n",stackTop(st));
}
