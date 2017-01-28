#include <stdio.h>
#include <stdlib.h>
#include "hash-table-chaining.h"

void hash_print(HASH *table[]) {
    int i;
    HASH *node;
    printf("\n\nHash Table");
    for (i = 0; i < TABLE_SIZE; i++) {
        printf("\n[Bucket: %03d]", i);
        for (node = table[i]; node != NULL; node = node->next) {
            printf("%5d", node->key);
        }
    }
}

void hash_init(HASH *table[]) {
    int i;
    for (i = 0; i < TABLE_SIZE; i++) {
        table[i] = NULL;
    }
}

int hash_function(int key) {
    int iv;
    iv = key % TABLE_SIZE;
    return iv;
}

int hash_find(HASH *table[], int key) {
    HASH *node;
    for (node = table[hash_function(key)]; node != NULL; node = node->next) {
        if (key == node->key) {
            return key;
        }
    }

    return -1;
}

int hash_insert(HASH *table[], int key, int data) {
    HASH *node;
    int index;
    if (hash_find(table, key) != -1) {
        return 0;
    }
    if (NULL == (node = malloc(sizeof(HASH)))) {
        printf("\nError: Can not malloc");
        exit(1);
    }
    index = hash_function(key);
    node->key = key;
    node->data = data;
    node->next = table[index];
    table[index] = node;
    return 1;
}