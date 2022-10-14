// C program to implement a
// linked list of four node......
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

// Driver's code
int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
    struct Node* fourth = NULL;

	// allocate 4 nodes in the heap
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

	// four blocks have been allocated dynamically.

    // The assigned data is random.. 


    //assign data to head node..

	head->data = 4; // assign data in first node

	head->next = second; // Link first node with
	// the second node

	// assign data to second node
	second->data = 8;

	// Link second node with the third node
	second->next = third;

	// assign data to third node
	third->data = 12;

    // Link third node with the fourth node
	third->next = fourth;

    // assign data to fourth node
	fourth->data = 16;

    // fourth->next = NULL, NULL means the list terminate here...
	fourth->next = NULL;


	//We have the linked list ready..

	return 0;
}
