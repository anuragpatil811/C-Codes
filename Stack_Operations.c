#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
	int size;
	int *arr;	
};
int isEmpty(struct stack *ptr)
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull(struct stack *ptr)
{
	if(ptr->top==ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(struct stack *ptr, int val)
{
	if(isFull(ptr))
	{
		printf("Cannot push %d into the stack", val);
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top] = val;
	}
}
int pop(struct stack *ptr)
{
	if(isEmpty(ptr))
	{
		printf("Stack Underflow!");
		return -1;
	}
	else
	{
		ptr->top--;
		int val = ptr->arr[ptr->top];
		return val;
	}
}
int main()
{
	struct stack *s = (struct stack *)malloc(sizeof(struct stack));
	s->size = 10;
	s->top = -1;
	s->arr = (int *)malloc(s->size * sizeof(int));
	printf("Stack has been created\n");
	printf("Before pushing, full: %d\n", isFull(s));
	printf("Before pushing, empty: %d\n", isEmpty(s));
	push(s, 1);
	push(s, 2);
	push(s, 3);
	printf("After pushing, full: %d\n", isFull(s));
	printf("After pushing, empty: %d\n", isEmpty(s));
	printf("Popped %d from the stack\n", pop(s));
	printf("Popped %d from the stack\n", pop(s));
	printf("Popped %d from the stack\n", pop(s));
	return 0;
}
