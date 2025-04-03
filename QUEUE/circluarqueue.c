#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if ((rear+1) % SIZE == front)
        printf("\nQueue is Full! Cannot enqueue\n",value);
        return;

        if (front == -1){
            front = rear = 0 ;
        }
        else{
            rear = (rear+1) % SIZE;
        }
        queue[rear] = value;
        printf("%d Enqueued to queue\n", value);
    }


int dequeue()
{
    if (isEmpty())
    {
        printf("\nQueue is Empty\n");
        return -1;
    }
    int dequeuevalue = queue[front];
    if(front=rear){
        front = rear = -1;
    }
    else
    {
        front = (front +1) % SIZE;
    }
    printf("%D dequeued drom queue\n");
    
}

void display()
{
    if (front == -1)
        printf("\nQueue is Empty\n");
    else
    {
        printf("\nQueue elements are:\n");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n==Circluar queue Menu ==\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to be enqueue: ");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 2:
            dequeue ();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("\nInvalid choice\n");
        }
    }
    return 0;
}