#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *createNode(int data)
{
	struct node *n = (struct node *)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}
void postorder(struct node *root)
{
	postorder(root->left);
	postorder(root->right);
	printf("%d\n", root->data);
}
int main()
{
	struct node *p = createNode(2);
	struct node *p1 = createNode(12);
	struct node *p2 = createNode(13);
	struct node *p3 = createNode(14);
	struct node *p4 = createNode(16);
	p->left = p1;
	p->right = p2;
	p1->left = p3;
	p2->right = p4;
	postorder(p);
	return 0;
}
