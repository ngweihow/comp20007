#include <stdbool.h>
//#include "list.h"
/*
typedef struct stack Stack;

// create a new stack and return a pointer to it
Stack *new_stack();

// destroy a stack and free its memory
void free_stack(Stack *stack);

// add an element to the front of a stack
// this operation is O(1)
void stack_add_start(Stack *stack, int data);


// remove and return the front data element from a stack
// this operation is O(1)
// error if the stack is empty (so first ensure stack_size() > 0)
int stack_remove_start(Stack *stack);

// return the number of elements contained in a stack
int stack_size(Stack *stack);

// returns whether the stack contains no elements (true) or some elements (false)
bool stack_is_empty(Stack *stack);