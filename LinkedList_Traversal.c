#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node * next;
};
void linkedListTraversal(struct Node *ptr)
{
	while(ptr != NULL)
	{
		printf("Element: %d\n", ptr->data);
		ptr = ptr->next;
	}
}
int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	struct Node * fifth;
	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	fourth = (struct Node *)malloc(sizeof(struct Node));
	fifth = (struct Node *)malloc(sizeof(struct Node));
	head->data=7;
	head->next=second;
	second->data=11;
	second->next=third;
	third->data=12;
	third->next=fourth;
	fourth->data=13;
	fourth->next=fifth;
	fifth->data=14;
	fifth->next=NULL;
	linkedListTraversal(head);
	return 0;
}
