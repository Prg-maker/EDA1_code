#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct doubly_node{
    struct doubly_node * prev;
    struct doubly_node * next;
    int val;

}DoublyNode, Node;


typedef struct doubly_list{
    Node * begin;
    Node * end ;
    size_t size;
}LikendListDoubly, LinkedList;


LinkedList * createLinkedList(){
    LinkedList * L = (LinkedList*)calloc(1 , sizeof(LinkedList));

    L->begin = NULL;
    L->end = NULL;

    L->size = 0;
    return L;
}


Node * createNode(int val){
    Node * node = (Node*)calloc(1 , sizeof(Node));
    node ->next = NULL;
    node ->prev = NULL;

    node->val = val;

    return node;
}

void List_destroy(LinkedList **ref){
    LinkedList * L = *ref;

    Node * p = L->begin ;
    while(p!= NULL){
        Node * aux = p;
        p=p->next;

        free(aux);
    }

    free(L);
}


bool List_empty(const LinkedList * L){
    return L->size == 0 ;
}

void imprimir(const  LinkedList * L ){
    Node * node =  L->begin;

    while(node != NULL){
        printf("%d -> " , node->val);
        node = node->next;
    }
    printf("NULL\n");
}

void LinkedList_add_fist(LinkedList * L , int val){
    Node * node = createNode(val);
    node ->next = L->begin;

    if(List_empty(L)){
        L->end = node;

    }else{
        L->begin ->prev = node;
    }   

    L->begin = node;
    L->size++;

}


void imprimir_invert(const  LinkedList * L ){
    Node * node =  L->end;

    while(node != NULL){
        printf("%d -> " , node->val);
        node = node->prev;
    }
    printf("NULL\n");
}

void LinkedList_add_end(LinkedList * L , int val){
    Node * node = createNode(val);
    node->prev = L->end;

    if(List_empty(L)){
        L->begin = node;
    }else{
        L->end ->next = node;
    }
    L->end = node;
    L->size++;
    
}
 
void LinkedListRemove(LinkedList * L , int val){
    if(List_empty(L)){
        printf("Lista vazia");
        return;
    }
    if(L->begin->val == val){
        Node * node = L->begin;
        if(L->begin == L->end){
            L->begin =NULL;
            L->end = NULL;
        }else{
            L->begin = node ->next;
            L->begin ->prev = NULL;


        }
        L->size--;
        free(node);
    }else{
        
    }

}
int main(){

    LinkedList * lista = createLinkedList();

    LinkedList_add_fist(lista, 2 );
    LinkedList_add_fist(lista, 5 );

    imprimir(lista);

    LinkedListRemove(lista, 5);
    imprimir(lista);
    printf("\n");
    printf("size of list : %zu\n" , lista->size);
}