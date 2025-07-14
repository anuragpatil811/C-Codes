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
struct node *insertAtmiddle(int index, int data, struct node * head)
{
	struct node * ptr = (struct node *)malloc(sizeof(struct node));
	struct node *p = head;
	int i=0;
	while(i != index-1)
	{
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;
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
	
	head->data = 7;
	head->next = second;
	second->data = 8;
	second->next = third;
	third->data = 9;
	third->next = NULL;
	printf("Before insertion\n");
	linkedListTraversal(head);
	head = insertAtmiddle(head,1);
	printf("After insertion\n");
	linkedListTraversal(head);
	return 0;
}
