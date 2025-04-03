#include <stdio.h>
#include <stdlib.h>

struct DoublyLinkedList {
    struct DoublyLinkedList *prev;
    int num;
    struct DoublyLinkedList *next;
};

struct DoublyLinkedList *start = NULL;

void insert();
void display();
void del();
void edit();
void count();
void sort();
void reverse();
void atbeg();
void atend();
void before();
void after();
void atpos();

int main() {
    int ch;
    do {
        printf("\nDoubly Linked List Operations\n");
        

        switch (ch) {
            case 1: insert();
             break;
            case 2: display();
             break;
            case 3: del();
             break;
            case 4: edit();
             break;
            case 5: count();
             break;
            case 6: sort();
             break;
            case 7: reverse();
             break;
            case 8: exit(0);

            default: printf("Invalid choice!\n");
        }
    } while (1);

    return 0;
}

void insert() {
    int ch2;
    do {
        printf ("\n 1. ATBEG ") ;
		printf ("\n 2. ATEND")  ;
		printf ("\n 3. BEFORE") ;
		printf ("\n 4. AFTER ")	 ;
		printf ("\n 5. ATPOSI")  ;
		printf ("\n 6. EXIT      ")  ;
		printf ("\n\n Enter Your Choice = ") ;
		scanf ("%d",&ch2);

        switch (ch) {
            case 1: atbeg();
             break;
            case 2: atend();
             break;
            case 3: before();
             break;
            case 4: after();
             break;
            case 5: atpos();
             break;
            case 6:
             return;

            default: printf("Invalid choice!\n");
        }
    } while (1);
}

void atbeg() {
    struct DoublyLinkedList *node = (struct DoublyLinkedList*)malloc(sizeof(struct DoublyLinkedList));
    printf("Enter value: ");
    scanf("%d", &node->num);
    node->prev = NULL;
    node->next = start;
    
    if (start != NULL)
        start->prev = node;
    start = node;
}

void atend() {
    struct DoublyLinkedList *node = (struct DoublyLinkedList*)malloc(sizeof(struct DoublyLinkedList));
    struct DoublyLinkedList *temp = start;
    
    printf("Enter value: ");
    scanf("%d", &node->num);
    node->next = NULL;
    
    if (start == NULL) {
        node->prev = NULL;
        start = node;
        return;
    }
    
    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = node;
    node->prev = temp;
}

void display() {
    struct DoublyLinkedList *temp = start;
    if (start == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    printf("List: ");
    while (temp != NULL) {
        printf("%d  ", temp->num);
        temp = temp->next;
    }
    printf("NULL\n");
}

