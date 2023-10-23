#include "chain.h"
#include <stdio.h>

int hash(int key)
{
    return key%10;
}

void Insert(struct Node * H[] , int key)
{
    int index=hash(key);
    SortedInsert(&H[index],key);
}

int main(){
    struct Node *HT[10];
    int i;
    for(int i=0;i<10;i++){
        HT[i]=NULL;
    }
    Insert(HT,12);
    Insert(HT,22);
    Insert(HT,42);
    struct Node * temp=Search(HT[hash(22)],22);
    printf("%d",temp->data);
    return 0;
}