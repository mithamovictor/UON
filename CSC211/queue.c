#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
struct Queue{
        int queue[SIZE];
        int front;
        int rear;
    };

struct Queue makeQueue();
void enQueue();
void deQueue();
void displayQueue();
int isEmpty();
int isFull();
void peek();

struct Queue makeQueue(){
    struct Queue q;
    q.front = -1;
    q.rear = -1;
    return q;
};



int main()
{
    struct Queue q = makeQueue();

    enQueue(4, &q);
    deQueue(&q);
    displayQueue(q);
    return 0;
}

int isEmpty(struct Queue* q){
    if(q->rear == -1){
        printf("Queue is empty \n");
        return 1;
    }
        printf("Queue is not empty \n");
        return 0;
}

int isFull(struct Queue* q){
    if(q->rear == SIZE - 1){
        printf("Queue is full \n");
        return 1;
    }
        printf("Queue is not full \n");
        return 0;
}

void peek(struct Queue* q){
    if(isEmpty(q)){
        return;
    }
    printf("Top value in the Queue:: %d \n", q->queue[q->front]);
}


void enQueue(int x, struct Queue* q){
    if(q->front == -1){
        q->front = 0;
        q->rear = 0;
        q->queue[q->rear] = x;
        printf("Queue enQueued successfully \n");
        return;
    }
    if(isFull(q)){
        return;
    }
        q->rear++;
        q->queue[q->rear] = x;
        printf("Queue enQueued successfully \n");
        return;
}

void deQueue(struct Queue* q){
    if(isEmpty(q)){
        return;
    }

    q->queue[q->front] = 0;
    q->front++;
    if(q->front > q->rear){
        q->front = q->rear = -1;
    }
    printf("Queue deQueued successfully \n");
    return;
}

void displayQueue(struct Queue q){
    if(q.front == -1){
        return;
    }
    int i = 0;
    for(i = q.front; i<=q.rear; i++){
        printf("%d \n", q.queue[i]);
    }
}
