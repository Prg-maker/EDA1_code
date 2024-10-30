#include <stdio.h>
#include <stdlib.h>





typedef struct _snode{
    int val;
    struct _snode *next;
}SNode;

typedef struct _linked_list{
    SNode *begin;
}LinkedList;

SNode * SNode_create(int val){
    SNode *snode = (SNode*) calloc(1, sizeof(SNode));
    snode -> val= val;

}
LinkedList * LinkedList_create(){
    LinkedList *L = (LinkedList*) calloc(1,sizeof(LinkedList));
    L->begin = NULL;

    return L;   
}

void LinkedList_add_first(LinkedList *L, int val){
   
    SNode *p = SNode_create(val);
    p ->next= L->begin;
    L->begin = p;

}
void LinkedList_print(const LinkedList *L){
    SNode*p = L->begin;
    while(p!= NULL){
        printf("%d\n" , p->val);
        p= p->next;
    }
}
int main(){

    LinkedList *list = LinkedList_create();
    LinkedList_add_first(list,1);
    LinkedList_add_first(list,2);
    LinkedList_add_first(list,3);
    LinkedList_add_first(list,4);
    LinkedList_print(list);

    return 0;
}