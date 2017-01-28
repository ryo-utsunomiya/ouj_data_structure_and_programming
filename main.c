#include <stdio.h>
#include <stdlib.h>
#include "hash-table-chaining.h"

int main() {
    HASH *table[TABLE_SIZE];
    int i, iF, key, data;

    hash_init(table);
    for (i = 0; i < TABLE_SIZE; i++) {
        key = rand() % 1000;
        data = key;
        hash_insert(table, key, data);
    }
    hash_print(table);
    iF = hash_find(table, 73);
    printf("\n*** Found %d !!", iF);

    return 0;
}
