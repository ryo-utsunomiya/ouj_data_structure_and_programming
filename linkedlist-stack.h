struct node {
    int value;
    struct node *next;
};
typedef struct node NODE_TYPE;

void node_init(NODE_TYPE *head);

void push(NODE_TYPE *head, int value);

void pop(NODE_TYPE *head);