#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int *data;
    int front;
    int rear;
    int size;
    int capacity;
};
typedef struct Queue Queue;

Queue* Creat_A_Queue(int cap) {
    Queue* Q = (Queue*)malloc(sizeof(Queue));
    Q->data = (int*)malloc(cap * sizeof(int));
    Q->front = 0;
    Q->rear = 0;
    Q->size = 0;
    Q->capacity = cap;
    return Q;
}

void EnQueue(Queue* Q, int val) {
    if (Q->size == Q->capacity) {
        printf("Queue is full\n");
        return;
    }
    Q->data[Q->rear] = val;
    Q->rear = (Q->rear + 1) % Q->capacity;
    Q->size++;
}

int DeQueue(Queue* Q) {
    if (Q->size == 0) {
        printf("Queue is empty\n");
        return -1;
    }
    int val = Q->data[Q->front];
    Q->front = (Q->front + 1) % Q->capacity;
    Q->size--;
    return val;
}

int Front(Queue* Q) {
    if (Q->size == 0) {
        printf("Queue is empty\n");
        return -1;
    }
    return Q->data[Q->front];
}

int main() {
    Queue* Q1 = Creat_A_Queue(100);
    Queue* Q2 = Creat_A_Queue(10);
    Queue* Q3 = Creat_A_Queue(2000);

    EnQueue(Q1, 10);
    EnQueue(Q2, 20);
    EnQueue(Q1, 30);
    
    printf("%d\n", DeQueue(Q1));  // Output: 10
    printf("%d\n", Front(Q1));    // Output: 30

    return 0;
}
