#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode->prev = NULL;
    return newNode;
}
void josephusProblem(int n, int k) {
    int i;
    struct Node* head = createNode(1);
    struct Node* current = head;
    for( i = 2; i <= n; i++) {
        current->next = createNode(i);
        current->next->prev = current;
        current = current->next;
    }
    current->next = head;
    head->prev = current;

    
    struct Node* currentPerson = head;
    while (n > 1) {
        
        for (i = 1; i < k; i++) {
            currentPerson = currentPerson->next;
        }
        currentPerson->prev->next = currentPerson->next;
        currentPerson->next->prev = currentPerson->prev;
        struct Node* temp = currentPerson->next;
        free(currentPerson);
        currentPerson = temp;
        n--;
    }
    printf("The survivor is person %d.\n", currentPerson->data);
    free(currentPerson);
}
int main() {
    int n, k;
    
    printf("Enter the number of people (n): ");
    scanf("%d", &n);
    printf("Enter the counting number (k): ");
    scanf("%d", &k);
    if (n <= 0 || k <= 0) {
        printf("Invalid input. Both n and k must be positive integers.\n");
    } 
	else {
        josephusProblem(n, k);
    }

    return 0;
}
