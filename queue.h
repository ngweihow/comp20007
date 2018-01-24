#include <stdbool.h>
//#include "list.h"
/*
typedef struct queue Queue;

// create a new queue and return a pointer to it
Queue *new_queue();

// destroy a queue and free its memory
void free_queue(Queue *queue);


// add an element to the back of a queue
// this operation is O(1)
void queue_add_end(Queue *queue, int data);

// remove and return the front data element from a queue
// this operation is O(1)
// error if the queue is empty (so first ensure queue_size() > 0)
int queue_remove_start(Queue *queue);

// return the number of elements contained in a queue
int queue_size(Queue *queue);

// returns whether the queue contains no elements (true) or some elements (false)
bool queue_is_empty(Queue *queue);