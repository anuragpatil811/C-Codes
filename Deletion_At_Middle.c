#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
	while(ptr != NULL)
	{
		printf("Element: %d\n", ptr->data);
		ptr = ptr->next;
	}
}

struct node* deleteAtMiddle(struct node *head, int index)
{
	int i = 0;
	struct node *p = head;
	
	while(i < index-1)
	{
		p = p->next;
		i++;
	}
	
	struct node *q = p->next;
	p->next = q->next;
	free(q);

	return head;
}

int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	
	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	
	head->data = 8;
	head->next = second;
	
	second->data = 9;
	second->next = third;
	
	third->data = 10;
	third->next = NULL;
	
	printf("Linked list before deletion\n");
	linkedListTraversal(head);
	
	head = deleteAtMiddle(head, 1); // Assuming you want to delete at index 1 (second node).
	
	printf("Linked list after deletion\n");
	linkedListTraversal(head);

	// Free the memory allocated for nodes (optional, but recommended).
	free(head);
	free(second);
	free(third);
	
	return 0;
}

