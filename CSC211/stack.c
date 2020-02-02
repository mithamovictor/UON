#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


struct Stack {
    int top;
    unsigned int capacity;
    int* array;
};


struct Stack* createStack(unsigned int capacity){
    struct Stack * stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
};


int isFull(struct Stack * stack){
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack * stack){
    return stack->top == -1;
}

int push(struct Stack* stack, int item){
    if(isFull(stack)){
        return -1;
    }

    stack->array[++stack->top] = item;
    printf("pushed %d to the stack:: stack: %d \n", item, stack->array[stack->top]);
    return 1;
}

int pop(struct Stack* stack){
    if(isEmpty(stack)){
        return -1;
    }

    return stack->array[--stack->top];
}

int peek(struct Stack* stack){
    if(isEmpty(stack)){
        return -1;
    }

    return stack->array[stack->top];
}


int main()
{
    struct Stack * stack = createStack(5);
    printf("is push successful :: %d \n", push(stack, 10));

    printf("Item on top:: %d \n", peek(stack));
    return 0;
}
