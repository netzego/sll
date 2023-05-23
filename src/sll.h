#ifndef __SLL_H
#define __SLL_H 1

#include <stdint.h>

/**
 *  Structure representing a node in a single linked list
 *
 */
struct sllnode {
    uint8_t value;        /* value of the node  */
    struct sllnode *next; /* pointer to the next node  */
};

/**
 *  Typedef node for sllnode
 *
 */
typedef struct sllnode node;

/**
 *  Function to create a list or prepend a new allocated node to an existing
 *  list/node.  Create a new list by specify a NULL pointer as the next parameter.
 *  Prepend to an existing list by passing the head (first node) of the list as
 *  next parameter.  The function uses malloc to allocate memory for the new
 *  node.  On failure a NULL pointer will be returned.
 *
 *  @param value    The value of the node
 *  @param next     Pointer to the next node or NULL pointer if
 *
 *  @returns        On success returns a pointer to new the node structure.
 *                  On failure a NULL pointer is returned.
 *
 *  @code
 *      node *head;
 *      head = list_add(13, NULL) // create a new list
 *      head = list_add(12, head) // prepend a new node to the list
 *
 */
node *list_add(uint8_t value, node *next);

#endif /* end __SSL_H  */
