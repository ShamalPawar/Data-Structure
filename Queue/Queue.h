#ifndef QUEUE_
#define QUEUE_
struct Queue
{
    int front,rare;
    int *pArray;
    int sizeOfQueue;
    int currentSize;
};
struct Queue* create_queue(int n);
int is_full(struct Queue *q);
int is_empty(struct Queue *q);
void enqueue(struct Queue *q, int val);
int dequeue(struct Queue *q);
int front(struct Queue *q);
int rare(struct Queue *q);
#endif