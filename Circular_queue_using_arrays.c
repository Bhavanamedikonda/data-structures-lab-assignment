#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct {
    int queue[MAX_SIZE];
    int front, rear;
} CircularQueue;

void initQueue(CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
}

int is_empty(CircularQueue *q) {
    return (q->front == -1);
}

int is_full(CircularQueue *q) {
    return ((q->rear + 1) % MAX_SIZE == q->front);
}

void enqueue(CircularQueue *q, int item) {
    if (is_full(q)) {
        printf("Queue is full\n");
        return;
    }
    if (is_empty(q))
        q->front = 0;
    q->rear = (q->rear + 1) % MAX_SIZE;
    q->queue[q->rear] = item;
}

int dequeue(CircularQueue *q) {
    if (is_empty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    int item = q->queue[q->front];
    if (q->front == q->rear)
        q->front = q->rear = -1;
    else
        q->front = (q->front + 1) % MAX_SIZE;
    return item;
}

int peek(CircularQueue *q) {
    if (is_empty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->queue[q->front];
}

int main() {
    CircularQueue q;
    initQueue(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);

    printf("Dequeuing: %d\n", dequeue(&q));
    printf("Peek: %d\n", peek(&q));

    return 0;
}

