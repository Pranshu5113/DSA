#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void display(struct node *ptr){
    while( ptr != NULL){
        printf("Element is :%d \n",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    
    // declaring pointer variables //
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;

    // allocating memory for each variable//

    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head ->data = 5;
    head ->next = first;

    first->data = 1;
    first->next = second;

    second->data = 4;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    display(head);
    return 0;

}
