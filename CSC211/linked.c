#include <stdio.h>

typedef struct node {
	int data;
	struct node * next;
}node;

node * createLinkedList(int n);

int main() {
	int n = 0;
	node * HEAD = NULL;
	printf("\nHow many nodes: ");
	scanf("%d", &n);
	
	return 0;
}

node * createLinkedList(int n) {
	int i = 0;
	node * head = NULL;
	node * temp = NULL;
	node * p = NULL;
	
	for (i=0; i<n; i++) {

        // create an individual isolated node

		temp = (node*)malloc(sizeof(node));
		printf("\nEnter the data for node number %d", i+1);
        scanf("%d", $(temp->data));
        temp->next = NULL;

        // If list is currently empty, then make temp the first node.
        if (head == NULL) { 
            head = temp;
        }
	}
}
