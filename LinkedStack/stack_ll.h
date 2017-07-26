#ifndef stack_ll
#define stack_ll

typedef struct n{
    int data;
    Node *next;
}Node;

int pop;
int pop(node* n);
int push(node* n, int data);
int print_stack(node* n);

#endif // stack_ll
