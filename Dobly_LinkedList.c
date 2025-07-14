#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};
void linkedListTraversal(struct Node *ptr)
{
	while(ptr != NULL)
	{
		Printf("Element: %d\n", ptr->data);
		ptr = ptr->next;
		ptr = ptr->prev;
	}
}
int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	head->data = 7;
	head->next = second;
	second->data = 8;
	second->next = third;
	second->prev = head;
	third->data = 9;
	third->next = NULL;
	third->prev = second;
	linkedListTraversal(head);
	return 0;
}
