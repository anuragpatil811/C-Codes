#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left;
	struct node * right;
};
struct node * createNode(int data)
{
	struct node *n;
	n = (struct node *)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}
void preorder(struct node * root)
{
	if(root != NULL)
	{
		printf("%d\n", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
int main()
{
	struct node *p = createNode(2);
	struct node *p1 = createNode(1);
	struct node *p2 = createNode(4);
	struct node *p3 = createNode(5);
	struct node *p4 = createNode(6);
	p->left = p1;
	p->right = p2;
	p1->left = p3;
	p2->right = p4;
	preorder(p);
	return 0;
}
