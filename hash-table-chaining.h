#define TABLE_SIZE 10

struct HashType {
    int key;
    int data;
    struct HashType *next;
};
typedef struct HashType HASH;

void hash_print(HASH *table[]);

void hash_init(HASH *table[]);

int hash_function(int key);

int hash_find(HASH *table[], int key);

int hash_insert(HASH* table[], int key, int data);