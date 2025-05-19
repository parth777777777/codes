#include<stdio.h>
#include<stdlib.h>
struct queue {
    int size; 
    int front;
    int rear;
    int* Q;
};

void create(struct queue* q , int size){
    q->size = size;
    q->front= q->rear = -1;
    q->Q = (int *)malloc(size * sizeof(int));
}

void enqueue(struct queue* q , int item){
    if(q->rear == q->size -1){
        printf("Queue is full\n");
        return;
    }
    q->Q[++q->rear] = item;
}

int dequeue(struct queue* q){
    if(q->front == q->rear){
        printf("queue is empty!\n");
        exit(1);
    }
    return q->Q[q->front++];
}

void display(struct queue q){
    if(q.rear == q.front){
        printf("queue is empty!\n");
        return;
    }
    for(int i = q.front + 1 ; i<=q.rear ; i++){
        printf("%d\n", q.Q[i]);
    }
}

int main(){
   struct queue q;
   create(&q,5);
   enqueue(&q,11);
   enqueue(&q,21);
   display(q);
   printf("Dequeue'd item is : %d",dequeue(&q));
   display(q);
}