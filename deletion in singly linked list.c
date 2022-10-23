#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

/* Link list node */
struct Node {
	int data;
	struct Node* next;
};

/* Given a reference (pointer to pointer) to the head
	of a list and an int, push a new node on the front
	of the list. */
void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

void deleteNode(struct Node* node)
{
	struct Node* prev;
	if (node == NULL)
		return;
	else {
		while (node->next != NULL) {
			node->data = node->next->data;
			prev = node;
			node = node->next;
		}
		prev->next = NULL;
	}
}

/* Driver program to test above function*/
int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;

	/* Use push() to construct below list
	1->12->1->4->1 */
	push(&head, 1);
	push(&head, 4);
	push(&head, 1);
	push(&head, 12);
	push(&head, 1);

	printf("Before deleting \n");
	printList(head);

	/* I m deleting the head itself.
		You can check for more cases */
	deleteNode(head);

	printf("\nAfter deleting \n");
	printList(head);
	getchar();
	return 0;
}
