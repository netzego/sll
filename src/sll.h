#ifndef SLL_H
#define SLL_H

#include <stdint.h>

/**
 *  Structure representing a node in a single linked list
 *
 */
typedef struct sllnode {
    int8_t value;         /* value of the node  */
    struct sllnode *next; /* pointer to the next node  */
} node;

/**
 *  Typedef node for sllnode
 *
 */
typedef struct sllnode node;

#endif /* end SSL_H  */
