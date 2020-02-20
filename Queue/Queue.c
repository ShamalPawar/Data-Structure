/**
 * @author : shamal Pawar
 * @details : Queue functionality
 * @Note : 
 * @date : 10/02/2020
*/
#include<stdio.h>
#include<stdlib.h>
#include "Queue.h"
#define INT_MIN -100000

/**
 * Create queue
*/
struct Queue* create_queue(int n)
{
    struct Queue *q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = 0;
    q->rare = 0;
    q->sizeOfQueue = n;
    q->pArray = (int *)malloc(n*sizeof(int));
    return q;
}
/**
 * Function name : is_full
 * @detials : check queue is full 
*/

int is_full(struct Queue *q)
{
    return(q->currentSize == q->sizeOfQueue);
}

/**
 * function name : is_empty
 * @details : check queue is empty or not
*/
int is_empty(struct Queue *q)
{
    return(q->currentSize == 0);
}
/**
 * function name : enqueue
 * @details : add element in queue
*/
void enqueue(struct Queue *q, int val)
{
    if(!is_full(q))
    {
        q->pArray[q->rare] = val;
        q->currentSize++;
        q->rare++;
    }
    else
    {
        printf(" queue is full. Will not able to enqueue\n");
    }
    
}
/**
 * @function name : dequeue
 * @details : delete element from queue
*/
int dequeue(struct Queue *q)
{
    int retval = INT_MIN;
    if(!is_empty(q))
    {
        retval = q->pArray[q->front];
        q->front++;
        
    }
    return retval;
    
}

/**
 * @function : front
 * @details : return front element of queue
*/
int front(struct Queue *q)
{
    return q->pArray[q->front];
}
/**
 * @function : rare
 * @details : return rare element of queue
*/
int rare(struct Queue *q)
{
    return q->pArray[q->rare];
}

//main function
int main()
{
    int dval;
    struct Queue *pQueue = create_queue(1000);
 
    enqueue(pQueue, 1);
    dval = dequeue(pQueue);
    if(dval != INT_MIN)
    {
        printf("Dequeue value is = %d\n",dval);
    }
    else
    {
        printf("Queue is empty");
    }
    
    printf("Front = %d\n",front(pQueue));
    printf("rare = %d\n",rare(pQueue));
    return 0;
}
