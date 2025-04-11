#include <stdio.h>

struct Queue{
    int *data;
    int front;
    int rear;
    int size;
};
typedef struct Queue Queue;
Queue *Creat_A_Queue(int cap){ // 100
    Queue *Q = (Queue*)malloc(sizeof(Queue));
    Q->data = (int*)malloc(cap*sizeof(int));
    Q->front = -1;
    Q->rear = -1;
    Q->size = 0;
    return Q;
}
void EnQueue(Queue *Q, int val){
    Q->rear = (Q->rear + 1) % 100; // 1
    if(Q->size == 100){
        printf("Filled");
        return;
    }
    Q->data[Q->rear] = val;
    Q->size++;
}
int DeQueue(Queue *Q){
    if(Q->size == 0){
        return -1;
    }
    
    Q->front = (Q->front+1)%100;
    Q->size--;
    return Q->data[Q->front];
}
int Front(Queue *Q){
    if(Q->size == 0){
        return -1;
    }
    
    return Q->data[Q->front+1];
}

int main() {
	// your code goes here
	Queue *Q1 = Creat_A_Queue(100);
	
	Queue *Q2 = Creat_A_Queue(10);
	Queue *Q3 = Creat_A_Queue(2000);
	
	EnQueue(Q1,10);
	EnQueue(Q2,20);
	printf("%d",DeQueue(Q1));
	

}

