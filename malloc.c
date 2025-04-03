#include <stdio.h>
#include <stdlib.h>


// This is self referential structure
struct linklist{
    int data;
    char status;
    struct linkedlist *next; //self referential pointer 
};

void insert(int val){  //12
    struct linklist *ptr=(struct linklist *)malloc(sizeof(struct linklist));
    struct linklist *ptr1=(struct linklist *)malloc(sizeof(struct linklist));
     ptr->data=val;
     printf("%d",ptr->data);
}     

int main(){
     insert(12);
}