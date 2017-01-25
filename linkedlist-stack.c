#include <stdio.h>
#include <stdlib.h>
#include "linkedlist-stack.h"

void node_init(NODE_TYPE *head) {
    head->next = NULL;
}

void push(NODE_TYPE *head, int value) {
    NODE_TYPE *new_node;
    new_node = (NODE_TYPE *) malloc(sizeof(NODE_TYPE));

    new_node->next = head->next;
    new_node->value = value;
    head->next = new_node;
    printf("\npush -> %d", value);
}

void pop(NODE_TYPE *head) {
    NODE_TYPE *next;

    if (head->next == NULL) {
        printf("\nStack is empty");
    } else {
        next = head->next;
        printf("\npop -> %d", next->value);
        head->next = next->next;
        free(next);
    }
}
