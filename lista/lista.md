```c


bool LinkedList_is_empty(const LinkedList *L){
    return (L->begin == NULL && L-> end == NULL) ;
}
void LinkedList_add_first(LinkedList *L, int val){
    SNode *p = SNode_create(val);
    p->next = L->begin;
         
   if(LinkedList_is_empty(L)){
        L->end = p;
   }
    L->begin = p;
    
}

bool LinkedList_is_empty(const LinkedList *L){
    return (L->begin == NULL && L-> end == NULL) ;
}

```
