#include<stdio.h>

#define MAX 3

typedef struct {
    int TOP;
    int ele[MAX];
} Stack;

void init(Stack *s) {
    s->TOP = -1;
}

int isFull(Stack *s) {
    if(s->TOP == MAX-1)
    return 0;
    return -1;
}

int isEmpty(Stack *s) {
    if(s->TOP == -1)
    return 0;
    return -1;
}

void push(Stack *s, int item) {
    if( !isFull(s) ) {
        printf("\nStack is full");
        return;
    }
    s->TOP = s->TOP + 1;
    s->ele[s->TOP] = item;
}

int pop(Stack *s, int *item) {
    if(!isEmpty(s)) {
        printf("\nStack is empty");
        return -1;
    }
    *item = s->ele[s->TOP];
    s->TOP = s->TOP - 1;
    return 0;
}

int main() {
    Stack s;
    int item;
    clrscr();
    init(&s);
    push(&s,10);
    push(&s,20);
    push(&s,30);
    pop(&s,&item);
    printf("\nPoped Item : %d",item);
    pop(&s,&item);
    printf("\nPoped Item : %d",item);
    pop(&s,&item);
    printf("\nPoped Item : %d",item);
    getch();
    return 0;
}
