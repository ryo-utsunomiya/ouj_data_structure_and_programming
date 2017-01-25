#include "linkedlist-stack.h"

int main() {
    NODE_TYPE stack;
    int i;
    node_init(&stack);
    for (i = 0; i < 5; i++) {
        push(&stack, i);
    }
    for (i = 0; i < 5; i++) {
        pop(&stack);
    }

    return 0;
}