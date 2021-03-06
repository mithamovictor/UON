#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
	// Two members. An integer member and a pointer
	int data;
	struct node * next;
}node;

node * createLinkedList(int n); // function to create the list

void displayList(node * head); // function to display the list

void search(node * head); // function to search the list

void delete_node(node * head); // function to delete node from the list

void insert_node(node * head); // function to insert node into list

int main() 
{
	int n = 0;
	int k, l;
	node * HEAD = NULL;
	printf("\nHow many nodes: ");
	scanf("%d", &n);
	HEAD = createLinkedList(n);
	displayList(HEAD);
	printf("\nEnter 1 to continue or 0 to exit\n");
	scanf("%d", &k );
	
	if ( k== 0 )
	{
		printf("\nbye...");
		exit;
	}
	else
	{
		printf("\nChoose next action\n");
		printf("\n\t1. Search");
		printf("\n\t2. Delete");
		printf("\n\t3. Insert\n");
		scanf( "%d", &l );
	}
	
	if ( l==1 ) 
	{
		// if search selected call the search function
		search(HEAD);
	}
	else if ( l==2 ) 
	{
		delete_node(HEAD);
	}
	else if ( l==3 )
	{
		insert_node(HEAD);
	}
	else
	{
		printf("\nInvalid option\n");
		exit;
	}
	
	return 0;
}

node * createLinkedList(int n) 
{
	int i = 0;
	node * head = NULL; // Used to store address of first node
	node * temp = NULL; // create a temporary node
	node * p = NULL; // to be used for positioning
	
	for (i=0; i<n; i++) 
	{

        // create an individual isolated node
		temp = (node*)malloc(sizeof(node));
		printf("\nEnter the data for node number %d\n", i+1);
        scanf("%d", &(temp->data));
        temp->next = NULL;

        // If list is currently empty, then make temp the first node
        if (head == NULL) 
		{ 
            head = temp;
        }
        else
        {
        	p = head;
        	while( p->next != NULL )
        		p = p->next;
        	p->next =  temp;
		}
	}
	
	return head;
}

void displayList(node * head)
{
	node * p = head;
	
	printf("\t");
	
	while(p != NULL)
	{
		// print the list
		printf("%d->", p->data);
		p = p->next;
	}
}

void search(node * head)
{
	int j = 0;
	printf("\nEnter the node to search for \n");
	scanf("%d", &j);
	
	node * p = head;
	
	while (p != NULL )
	{
		if( p->data == j )
		{
			printf("Node found.");
			break;
		}
		p=p->next;
	}
}

void delete_node(node * head)
{
	int d;
	printf("Enter the node to delete");
	printf("%d", &d);
	
	node * p, * q;
	
	q = head;
	p = head->next;
	
	// Delete start node.
	if ( q->data == d)
	{
		head = p; // make p the new head
		delete(q);
	}
	else
	{
		while ( p->data != d ) 
		{
			p=p->next;
			q=q->next;
		}
		
		// Delete last node
		if ( p->next == NULL )
		{
			q->next = NULL; // make q point to null
			delete(p);
		}
		else // Delete internal node
		{
			q->next = p->next; // make q point to p->next then delete p
			delete(p);
		}
	}
}

void insert_node(node * head)
{
	int i = 0, insert_position, store_next;
	printf("\nEnter the node to add\n");
	scanf("%d", &i);
	
	node *new_node, *p;
	
	p = head->next;
	
	// Store node at start
	new_node->next = head;
	head = new_node;
	
	// Store node in the middle
	while( p != insert_position )
	{
		p = p->next;
	}
	
	store_next = p->next;
	p->next = new_node;
	new_node->next = store_next;
	
	// Store node at the end
	while ( p->next != NULL )
	{
		p=p->next;
	}
	
	p->next = new_node;
	new_node->next = NULL;
}
