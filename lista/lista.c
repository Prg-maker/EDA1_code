#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct _snode{
    int val;
    struct _snode *next;
}SNode;

typedef struct _linked_list{
    SNode *begin;
    SNode *end;
}LinkedList;

SNode * SNode_create(int val){
    SNode *snode = (SNode*) calloc(1, sizeof(SNode));
    snode -> val= val;

}

// criando o tipo lista
LinkedList * LinkedList_create(){
    LinkedList *L = (LinkedList*) calloc(1,sizeof(LinkedList));
    L->begin = NULL;
    L -> end = NULL;

    return L;   
}


/*void LinkedList_add_first(LinkedList *L, int val){
   
    SNode *p = SNode_create(val);
    p ->next=  
    L->begin = p;
    

}*/

bool LinkedList_is_empty(const LinkedList *L){
    return (L->begin == NULL && L-> end == NULL) ;
}

// adicionando um valor em primeiro da lista
void LinkedList_add_first(LinkedList *L, int val){
    SNode *p = SNode_create(val);
    p->next = L->begin;
         
   if(LinkedList_is_empty(L)){
        L->end = p;
   }
    L->begin = p;
    
}
void LinkedList_add_last_low(LinkedList *L, int val){
    SNode *q = SNode_create(val);
    
   
   if(LinkedList_is_empty(L)){
        L->begin = q;
    }else{
        SNode*p = L->begin;
        while(p->next!= NULL){
            p = p->next;
        }
        p->next = q;
    }
}


// adicionando um valor no final da lista

void LinkedList_add_last_fast(LinkedList *L, int val){
    SNode *q = SNode_create(val);
    
    
   if(LinkedList_is_empty(L)){
        L->begin = L->end= q;
         
    }else{
        L->end->next = q;
        L->end = L->end->next;
      
    }
}

// printando a lista
void LinkedList_print(const LinkedList *L){
    SNode*p = L->begin;
    while(p!= NULL){
        printf("%d -> " , p->val);
        p= p->next;
    }
    printf("NULL\n");

    if(L->end == NULL){
        printf("L->end == NULL\n");
    }else{
        printf("L -> end = %d\n" , L->end->val);
    }
}
// remover um no de uma lista
void LinkedList_remove(LinkedList * L , int val){
    if(!LinkedList_is_empty(L)){
        if(L->begin->val ==val){
            SNode * pos = L->begin;
            
            if (L->begin == L->end){
                L->end = NULL;
            }
            L->begin=L->begin ->next; 
            free(pos);
        }
    
        else{
          SNode *prev = L->begin ;
          SNode * pos = L->begin -> next;  

          while(pos != NULL && pos->val != val){
            prev = pos;
                 
            pos = pos->next;
          }

          if(pos != NULL){

            prev ->next = pos->next;
            // se o elemento a ser removido é o último no da lista
            // caso 3;

            if(pos -> next == NULL){
                L->end = prev;
            }
            free(pos);
          } 

        }
    }
}


int main(){

    LinkedList *list = LinkedList_create();
    LinkedList_add_first(list, 20);
    LinkedList_add_first(list, 10);
    LinkedList_add_first(list, 20);
    LinkedList_print(list);

    printf("\n");
    LinkedList_remove(list,3);
    LinkedList_print(list);


    return 0;
}