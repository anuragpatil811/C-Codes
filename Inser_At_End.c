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
int insertAtEnd(struct node *head, int data)
{
	struct node * ptr = (struct node *)malloc(sizeof(struct node));
	struct node *p = head;
	ptr->data = data;
	while(p->next != NULL)
	{
		p = p->next;
	}
	p->next = ptr;
	ptr->next = NULL;
	return head;
}
int main()
{
	struct node * head;
	struct node * second;
	struct node * third;
	head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	head->data = 8;
	head->next = second;
	
	second->data = 9;
	second->next = third;
	
	third->data = 10;
	third->next = NULL;
	printf("Linked list before insertion\n");
	linkedListTraversal(head);
	head = 	insertAtEnd(head,11);
	printf("Linked list after insertion\n");
	linkedListTraversal(head);
	return 0;
}



