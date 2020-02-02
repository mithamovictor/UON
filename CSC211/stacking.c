#include <stdio.h>

#define MAX 2
int A[MAX];
int top = -1;

void Push();
void Pop();
int Top();
void Print();

int main() {
	Push(2);
	Print();
	Push(5);
	Print();
	Push(10);
	Print();
	Pop();
	Print();
	Push(12);
	Print();
}

void Push(int x) {
	if ( top == MAX-1) {
		printf("Error: The stack is overflow!");
		return;
	}
	top++;
	A[top] = x;
}

void Pop() {
	if(top == -1) {
		printf("Error: No element to pop!\n");
		return;
	}
	top--;
}

int Top() {
	return A[top];
}

void Print() {
	int i;
	printf("Stack:: ");
	for(i=0; i<=top; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}
