#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node * left;
	struct node * right;
};
struct node * createNode(int data)
{
	struct node * n;
	n = (struct node *)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}
void postorder(struct node * root)
{
	if(root =! NULL)
	{
		postorder(root->left);
		postorder(root->right);
		postorder(root->data);
	}
}
int main()
{
	struct node *p = createNode(2);
	struct node *p1 = createNode(1);
	struct node * p2 = createNode(3);
	struct node * p3 = createNode(4);
	struct node * p4 = createNode(5);
	p->left = p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	postorder(p);
	return 0;
}
	
	
	
