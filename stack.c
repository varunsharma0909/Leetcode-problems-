#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack [MAX];
int top = -1;


int isEmpty(){
	if(top == -1){
	return 1;
	}
	else{
	return 0;
}
}


void push(int value){
	if(top==5-1){
		printf("Stack Overflow! Can't push %d\n",value);
		return;
	}
	top++;
	stack[top]=value;
	printf("Pushed %d into Stack\n",value);
}
void peek(){
	if(top==-1){
		printf("\nStack is Empty!\n");
		return ;
	}
	printf("\nThe top Element is %d\n",stack[top]);
}

int pop(){
	if(top==-1){
		printf("\nStack Underflowed! Can't pop\n");
		return -1;
	}
	printf("\nPopped Element: %d\n",stack[top]);
	return stack[top--];
}

void display() {
    if (top == -1) {
        printf("\nStack is empty.\n");
        return;
    }
    int i;
    printf("\nStack: ");
    for ( i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main(){
	int choice,value,result,arr,size;
	while(1){
	    printf("\n====Stack Menu====\n");
	    printf("1. Push\n");
	    printf("2. Pop\n");
	    printf("3. Peek(Top)\n");
	    printf("4. Display\n");
	    printf("5. isEmpty\n");
	    printf("6. Exit\n");
	    printf("Enter your choice: ");
	    scanf("%d", &choice);

	
	switch(choice){
		case 1:
			printf("\nEnter Valaue to Push: ");
			scanf("%d",&value);
			push(value);
			break;
		case 2:
			pop();

			break;
		case 3:
			peek();
			
			break;
		case 4:
			display();
			
			break;
		case 5:
			result = isEmpty();
			if(result == 1){
				printf("\nStack is Empty!\n");
			}else{
				printf("\nStack is not Empty");
			}
	
		case 6:
			return 0;
		default:
			printf("\nInvaalid Choice! Please try again.\n");
	
	}
}
	return 0;
}
