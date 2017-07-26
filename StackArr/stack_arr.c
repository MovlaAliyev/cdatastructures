/*
*   Developed by Movla Aliyev for educational purpose
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h"


stack * declare(){
    stack *s    = (stack*) malloc(sizeof(stack));
    s->SIZE     = 0;
    s->CAPACITY = 2;
    s->array    = NULL;
    return s;
}

int pop(stack *s){
    if(s->SIZE <=0 || s->array == NULL){
        printf("Empty list");
        return -1;
    }
    int loop_i = 0;
    if(s->SIZE <= s->CAPACITY/4 && s->CAPACITY>2){
        int *new_arr =(int*) malloc(sizeof(int)*s->CAPACITY/2);
        for(loop_i = 0; loop_i < s->SIZE; loop_i++)
            new_arr[loop_i] = s->array[loop_i];

        free(s->array);     //free old array
        s->array = new_arr;
        s->CAPACITY /= 2;
    }
    return s->array[--s->SIZE];
}

void push(stack* s,int data){
    if(s->array == NULL)
        s->array = (int*) malloc(sizeof(int)*2);
    int loop_i = 0;
    if(s->SIZE >= s->CAPACITY){
        int *new_arr =(int*) malloc(sizeof(int)*s->CAPACITY*2);
        for(loop_i = 0; loop_i < s->SIZE; loop_i++)
            new_arr[loop_i] = s->array[loop_i];

        free(s->array);     //free old array
        s->array = new_arr;
        s->CAPACITY *= 2;
    }
    s->array[s->SIZE++] = data;
}

void print_stack(stack *s){
    int i = 0;
    for(i; i < s->SIZE; i++)
        printf("%d\n",s->array[i]);
}

