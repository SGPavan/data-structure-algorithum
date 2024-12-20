#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void main(){
    struct node *head =  NULL, *tmp=NULL;
    head =  (struct node*)malloc(sizeof(struct node));
    tmp = head;
    for(int i=0; i<5; i++){
        tmp->data = i;
        tmp->next = (struct node*)malloc(sizeof(struct node));
        tmp = tmp->next;
    }
    tmp->data = 5;
    tmp->next = NULL;
    tmp = head;
    while(tmp != NULL){
        printf("%d", tmp->data);
        tmp = tmp->next;
    }
}