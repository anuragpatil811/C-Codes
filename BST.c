#include <stdio.h>
#include <stdlib.h>
struct TreeNode {
int data;
struct TreeNode* left;
struct TreeNode* right;
};
struct TreeNode* createNode(int data) {
struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct
TreeNode));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
struct TreeNode* insert( struct TreeNode* root, int data) {
struct TreeNode* current = root;
if (root == NULL) {
return createNode(data);
}
while (1) {
if (data < current->data) {
if (current->left == NULL) {
current->left = createNode(data);
return root;
}
current = current->left;
} else {
if (current->right == NULL) {
current->right = createNode(data);
return root;
}
current = current->right;
}
}
}
void postorderTraversal(struct TreeNode* root) {
struct TreeNode* stack[100];
int top = -1;
struct TreeNode* current = root;
if (root == NULL)
return;
do {
while (current) {
if (current->right)
stack[++top] = current->right;
stack[++top] = current;
current = current->left;
}
current = stack[top--];
if (current->right && stack[top] == current->right) {
stack[top--] = current;
stack[++top] = current;
current = current->right;
} else {
printf("%d ", current->data);
current = NULL;
}
} while (top != -1);
}
int main() {
struct TreeNode* root = NULL;
int choice, data;
while (1) {
printf("\nBinary Search Tree Operations:\n");
printf("1. Insert Node\n");
printf("2. Postorder Traversal\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter the value to insert: ");
scanf("%d", &data);
root = insert(root, data);
break;
case 2:
printf("postorder:");
postorderTraversal(root);
break;
case 3:
exit(0);
default:
printf("Invalid choice. Please enter a valid option.\n");
}
}return 0;
}
