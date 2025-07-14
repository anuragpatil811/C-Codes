#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Passenger {
    char name[50];
    int ticketNumber;
};
#define MAX_SIZE 100
struct CircularQueue {
    struct Passenger data[MAX_SIZE];
    int front, rear;
};
void initializeQueue(struct CircularQueue *queue) {
    queue->front = -1;
    queue->rear = -1;
}
int isEmpty(struct CircularQueue *queue) {
    return (queue->front == -1);
}

int isFull(struct CircularQueue *queue) {
    return ((queue->front == 0 && queue->rear == MAX_SIZE - 1) || (queue->rear == (queue->front - 1) % (MAX_SIZE - 1)));
}

void enqueue(struct CircularQueue *queue, struct Passenger passenger) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot add more passengers.\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }

    queue->data[queue->rear] = passenger;
    printf("Passenger %s with ticket number %d added to the queue.\n", passenger.name, passenger.ticketNumber);
}

// Dequeue a passenger from the front of the circular queue
void dequeue(struct CircularQueue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. No passengers to dequeue.\n");
        return;
    }

    struct Passenger frontPassenger = queue->data[queue->front];
    printf("Passenger %s with ticket number %d has been issued a ticket and removed from the queue.\n", frontPassenger.name, frontPassenger.ticketNumber);

    if (queue->front == queue->rear) {
        // Last passenger in the queue
        initializeQueue(queue);
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
}

// Display the number of passengers in the queue
int countPassengers(struct CircularQueue *queue) {
    if (isEmpty(queue)) {
        return 0;
    }
    
    if (queue->front <= queue->rear) {
        return (queue->rear - queue->front + 1);
    } else {
        return (MAX_SIZE - queue->front + queue->rear + 1);
    }
}

int main() {
    struct CircularQueue passengerQueue;
    initializeQueue(&passengerQueue);

    int choice;
    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue Passenger\n");
        printf("2. Dequeue Passenger\n");
        printf("3. Display Front Passenger\n");
        printf("4. Display Number of Passengers in Queue\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                struct Passenger newPassenger;
                printf("Enter Passenger Name: ");
                scanf("%s", newPassenger.name);
                printf("Enter Ticket Number: ");
                scanf("%d", &newPassenger.ticketNumber);
                enqueue(&passengerQueue, newPassenger);
                break;
            }
            case 2:
                dequeue(&passengerQueue);
                break;
            case 3:
                if (!isEmpty(&passengerQueue)) {
                    printf("Front Passenger: %s with ticket number %d\n", 
					passengerQueue.data[passengerQueue.front].name, 
					passengerQueue.data[passengerQueue.front].ticketNumber);
                } else {
                    printf("Queue is empty.\n");
                }
                break;
            case 4:
                printf("Number of Passengers in Queue: %d\n", 
				countPassengers(&passengerQueue));
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}

