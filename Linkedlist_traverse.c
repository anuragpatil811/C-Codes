#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node
	{
		int data;
		struct node *next;
	}
	struct node,*head *mid, *last;
	head = malloc(sizeof(struct node));
	mid = malloc(sizeof(struct node));
	last = malloc(sizeof (struct node));
	head --> next = mid;
	mid --> next = last;
	last --> next = NULL;
	struct node *temp = head;
	while(temp!=NULL)
	{
		printf("%d -->" , temp-->data);
		temp = temp --> next;
	}
	printf("NULL");
	return 0;
}
