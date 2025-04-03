#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full!\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = value;
    printf("%d inserted into Queue.\n", value);
}
void dequeue()
{
    if(isEmpty()){
        printf("Queue is empty ! Cannot dequeue\n");
        return -1;
    }
    int dequeuedValue =queue[front];
    if(front ==rear){
        front=rear=-1;
    }else{
        front =(front+1)%SIZE;
    }
    printf("%d dequeued from queue\n",dequeuedValue);
    return dequeuedValue;
}
void display(int queue[SIZE]){
    if (front =-1 || front >rear){
        printf("Queue is empty\n");
        return;
    }
    for(int i=front ;i<rear;i++){
        printf("%d",queue[i]);
    }
}
int main()
{
    int choice, value;
    while (1)
    {
        printf("\n=======Queue Mneu=====\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display(queue);
            break;
        case 4:
            printf("Exiting....\n");
            return 0;
        default:
            printf("Invalid choice! please enter a valid option.\n");
        }
    }

    return 0;
}