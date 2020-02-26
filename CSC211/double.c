#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
	int data;
	struct node *next;
	struct node *prev;
}node;

node *create_list(); // function to search the list
void display_list(node *head);
void search(node *head); // function to search the list
void delete_node(node *head); // function to search the list
void insert_node(node *head); // function to insert into the list

int main()
{
    int k, l;
    node *HEAD = NULL;
    HEAD = create_list();
    display_list(HEAD);
    
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

node *create_list()
{
	int i, n, item;
	node *new_node, *p, *head; 
	
	printf("\nEnter the number of nodes\n");
    scanf("%d", &n);

	printf("\nEnter the first element of node\n");
    scanf("%d", &item);

    new_node = (node *)malloc(sizeof(new_node));

    // Create the first node
    new_node->data = item;
    new_node->next = NULL;
    new_node->prev = NULL;
    head = new_node;
    p = new_node;

    for ( i=1; i<n; i++ )
    {
        printf("\nEnter next node\n");
        scanf("%d", &item);

        new_node = (node *)malloc(sizeof(new_node));

        new_node->data = item;
        new_node->next = NULL;
        new_node->prev = p;

        p->next = new_node;

        p = p->next;
    }
}

void display_list(node *head)
{
	node *p = head;
	
	printf("\t");
	
	while(p != NULL)
	{
		// print the list
		printf("<-%d->", p->data);
		p = p->next;
	}
}

void search(node *head)
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

void delete_node(node *head)
{
	int d;
	printf("Enter the node to delete");
	printf("%d", &d);
	
	node *o, *p, *q, *temp;
	
	q = head;
	p = head->next;
	
	// Delete start node.
	if ( q->data == d)
	{
        p->prev = NULL; // make the new head prev NULL
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
            p->prev = NULL; // break p prev link to q
			q->next = NULL; // make q point to null
			delete(p);
		}
		else // Delete internal node
		{
			q->next = p->next; // make q point to p->next then delete p
            temp = p->next;
            temp->prev = NULL;
            p->prev = NULL;
			delete(p);
		}
	}
}

void insert_node(node *head)
{
	int i = 0, insert_position, store_next, store_prev;
	printf("\nEnter the node to add\n");
	scanf("%d", &i);
	
	node *new_node, *p, *q;
	
	p = head->next;
    q = head->prev;
	
	// Store node at start
	new_node->next = head;
    new_node->prev = NULL;
    head->prev = new_node;
	head = new_node;
	
	// Store node in the middle
	while( p != insert_position )
	{
		p = p->next;
	}
	
	store_next = p->next;
    store_prev = p;
	p->next = new_node;
	new_node->next = store_next;
    new_node->prev = store_prev;
	
	// Store node at the end
	while ( p->next != NULL )
	{
		p=p->next;
	}
	
	p->next = new_node;
	new_node->next = NULL;
    new_node->prev = p;
}