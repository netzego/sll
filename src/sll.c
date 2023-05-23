#include <stdlib.h>

#include "sll.h"

node *list_add(uint8_t value, node *next)
{
    node *nod = malloc(sizeof(node));

    if (nod != NULL) { /* malloc succeeded  */
        nod->value = value;
        nod->next  = next;
    }

    return nod;
}
