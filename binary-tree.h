struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
typedef struct Node NODE_TYPE;

void tree_display(NODE_TYPE *node, int level);

NODE_TYPE *tree_find_min(NODE_TYPE *node);

NODE_TYPE *tree_find_max(NODE_TYPE *node);

NODE_TYPE *tree_find(NODE_TYPE *node, int data);

NODE_TYPE *tree_find_non_recursion(NODE_TYPE *root, int data);

NODE_TYPE *tree_insert(NODE_TYPE *node, int data);

NODE_TYPE *tree_delete(NODE_TYPE *node, int data);