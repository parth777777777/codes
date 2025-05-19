#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct queue {
    struct node* front;
    struct node* rear;
};

//function to initialize queue
struct queue* createQueue(){
    struct queue* q = (struct queue* )malloc(sizeof(struct queue));
    q->front = q->rear = NULL;
    return q;
}

//function to create node 
struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(struct queue q){
    if(q.front == NULL) return 1;
    else return 0;
}

void enqueue(struct queue* q , int data){
    struct node* newNode = createNode(data);
    if(!newNode) exit(1); //node creation failed because no space in heap 
    //if queue is empty
    if(q->front == NULL) {
        q->front = q->rear = newNode;
        return;
    }
    //adding element at rear and updating rear
    newNode->data = data;
    q->rear->next = newNode;
    q->rear = newNode;
}

int dequeue(struct queue* q){
    if(isEmpty(*q)) exit(1);
    int data = q->front->data;
    struct node* temp = q->front;
    q->front = q->front->next;
    free(temp);

    if (q->front == NULL) q->rear = NULL;
    return data;
}

void display(struct queue *q){
    struct node* temp = q->front;
    printf("Queue: ");
    while(temp){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function for testing
int main() {
    struct queue* q = createQueue();
    enqueue(q , 10);
    enqueue(q , 20);
    enqueue(q , 30);
    display(q);
    dequeue(q);
    dequeue(q);
    display(q);
    return 0;
}