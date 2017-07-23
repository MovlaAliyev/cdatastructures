#include <stdio.h>
#include <stdlib.h>

int size = 0;

typedef struct Node{
    int value;
    struct Node* next;
}Node;

void push_back(Node** head, int value);
void add_front(Node** head, int value);
void printlist(Node* head);
int get(Node* head, int index);
int listsize();
int checkElementIndex(int index);
void remove_first(Node** head);
void remove_last(Node** head);
void remove_node(Node** head, int index);



int main(){
    Node* head = NULL;

    add_front(&head, 2);
    add_front(&head, 1);
    push_back(&head, 3);

    remove_node(&head, 1);


    printf("--------------------\n");


    printlist(head);

    return 0;
}

void add_front(Node** head, int value){
    Node* node  = (Node*) malloc(sizeof(Node));
    node->value = value;
    node->next  = (*head);
    (*head)     = node;
    size++;
}


void push_back(Node** head, int value){
    if((*head) == NULL)
        add_front(&head, value);
    else{
        Node* node = (Node*) malloc(sizeof(Node));
        Node* current_node = *head;
        while(current_node->next != NULL){
            current_node = current_node->next;
        }

        node->next  = NULL;
        node->value = value;
        current_node->next = node;
        size++;
    }

}

void printlist(Node* head){
    Node* node = head;

    while(node != NULL){
        printf("%d\n", node->value);
        node = node->next;
    }
}

int checkElementIndex(int index){
    if(index < 0 || index >= size){
        printf("out of index\n");
        return -1;
    }else{
        return 1;
    }
}

void remove_first(Node** head){
    Node* node = *head;
    if(size == 0)
        printf("Nothing to delete");
    else{
        (*head) = (*head)->next;
        size--;
        free(node);
    }
}

void remove_last(Node** head){
    if(size == 0)
        printf("Nothing to delete");
    else{
        Node* current_node = *head;
        while(current_node->next->next != NULL){
            current_node = current_node->next;
        }
        free(current_node->next->next);
        current_node->next = NULL;
        size--;
    }
}

int get(Node* head, int index){
    checkElementIndex(index);

    Node* node = head;
    int i = 0;

    for(i; i < index;i++){
        node = node->next;
    }
    return node->value;

}

void remove_node(Node** head, int index){
    checkElementIndex(index);

    Node* current_node = *head;
    int i = 0;
    for(i; i < index; i++){
        current_node = current_node->next;
    }

    current_node->next = current_node->next->next;
    size--;
}


int listsize(){
    return size;
}




