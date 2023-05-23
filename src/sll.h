#ifndef __SLL_H
#define __SLL_H 1

#include <stdint.h>

/**
 *  Structure representing a node in a single linked list
 *
 */
struct sllnode {
    int8_t value;         /* value of the node  */
    struct sllnode *next; /* pointer to the next node  */
};

/**
 *  Typedef node for sllnode
 *
 */
typedef struct sllnode node;

#endif /* end __SSL_H  */
