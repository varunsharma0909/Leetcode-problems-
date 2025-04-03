#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100  

int  stack[MAX];
int top = -1;

void push(int value){
    if(top == MAX -1){
        printf("Stack Overflow");
        exit(1);
    }
    return stack[top--];
}

int evaluatePostfix(char *expr){
    int i;
    
}
