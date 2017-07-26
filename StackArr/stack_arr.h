#ifndef stack_arr
#define stack_arr

typedef struct s{
    int CAPACITY;
    int SIZE;
    int *array;
}stack;

//typedef s stack;
stack* declare();
int pop(stack *s);
void push(stack *s, int data);
void print_stack(stack *s);



#endif // stack_arr

