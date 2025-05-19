#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct stack{
    struct node* head;
};

void initializeStack(struct stack* stack){
    stack->head = NULL;
}

int isEmpty(struct stack* stack){
    if(stack->head == NULL) return 1;
    else return 0;
}

void push(struct stack* stack, int data){
    struct node* newNode = createNode(data);
    if(!newNode){
        printf("Stack overflow\n");
        return;
    }
    newNode->next = stack->head;
    stack->head = newNode;
}

int pop(struct stack* stack){
    if(stack->head == NULL){
        printf("Stack underflow!\n");
        exit(1);
    }
    struct node* temp = stack->head;
    stack->head  = stack->head->next;
    int x  = temp->data;
    free(temp);
    return x;
}

int peek(struct stack* stack){
    if(stack->head == NULL){
        printf("stack is empty!\n");
        exit(1);
    }
    return stack->head->data;
}

void display(struct stack stack){
    if(stack.head == NULL){
        printf("stack is empty!\n");
        exit(1);
    }
    struct node* temp = stack.head;
    printf("Printing stack: \n");
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct stack stack;
    initializeStack(&stack);
    push(&stack , 10);
    push(&stack , 20);
    push(&stack , 30);
    display(stack);
    pop(&stack);
    pop(&stack);
    display(stack);
}