#include <stdio.h>
#include <stdlib.h>
#include "binary-tree.h"

int main() {
    NODE_TYPE *root;
    int i, v;

    root = NULL;
    printf("\nRandom numbers:\n");
    for (i = 0; i < 10; i++) {
        v = rand() % 100;
        printf("%2d ", v);
        root = tree_insert(root, v);
    }
    printf("\n\n\n*** Tree ***");
    tree_display(root, 0);
    printf("\n\n\n*** Delete 7 ***");
    tree_delete(root, 7);
    printf("\n\n\n*** Tree ***");
    tree_display(root, 0);

    return 0;
}
