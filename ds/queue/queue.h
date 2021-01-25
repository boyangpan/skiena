
/*	queue.h

	Header file for queue implementation

	by: Steven Skiena
*/

/*
Copyright 2003 by Steven S. Skiena; all rights reserved.

Permission is granted for use in non-commerical applications
provided this copyright notice remains intact and unchanged.

This program appears in my book:

"Programming Challenges: The Programming Contest Training Manual"
by Steven Skiena and Miguel Revilla, Springer-Verlag, New York 2003.

See our website www.programming-challenges.com for additional information.

This book can be ordered from Amazon.com at

http://www.amazon.com/exec/obidos/ASIN/0387001638/thealgorithmrepo/

*/

#include "../../ds/item/item.h"

#define QUEUESIZE       1000

typedef struct {
    int /*item_type*/ q[QUEUESIZE+1];	/* body of queue */
    int first;                      /* position of first element */
    int last;                       /* position of last element */
    int count;                      /* number of queue elements */
} queue;

void init_queue(queue *q);
void enqueue(queue *q, item_type x);
item_type dequeue(queue *q);
item_type headq(queue *q);
int empty_queue(queue *q);
void print_queue(queue *q);


