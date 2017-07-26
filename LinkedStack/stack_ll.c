#include <stdio.h>
#include <stdlib.h>
#include "stack_ll.h"

int pop(Node *root){
    if(root == NULL){
        printf("Empty list");
        return -1;
    }
    if(root->next = NULL){
        int rvalue = root->value;
        free(root);
        return rvalue;
    }
    Node *iter = root;
    while(iter->next->next != NULL)
        iter = iter->next;

    Node *temp = iter->next;
    int rvalue = temp->data;
    iter->next = NULL;
    free(tmp);
    return rvalue;
}

node* push(Node* root, int data){
    if(root == NULL){
        root = (Node*) malloc(sizeof(Node));
        root -> data = a;
        root -> next = NULL;
        return root;
    }
    Node* iter = root;
    while(iter->next != NULL)
        iter = iter->next;

    Node* temp = (Node*) malloc(sizeof(Node));
    temp->data = a;
    temp->next = NULL;
    iter->next = temp;

    return root;
}
