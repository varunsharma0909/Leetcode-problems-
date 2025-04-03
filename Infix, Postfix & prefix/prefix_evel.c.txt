#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

#define MAX 100  // Maximum stack size

int stack[MAX];  // Stack array
int top = -1;    // Stack pointer

// Function to push an element onto the stack
void push(int val) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = val;
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Function to evaluate prefix expression
int evaluatePrefix(char *expr) {
    int len = strlen(expr);
	int i;
    // Traverse from right to left
    for ( i = len - 1; i >= 0; i--) {
        if (isdigit(expr[i])) {
        	
            // Push operand onto the stack
            push(expr[i] - '0');
        } else {
            // Pop two operands
            int op1 = pop();
            int op2 = pop();
            
            // Perform operation
            int res;
            switch (expr[i]) {
                case '+': res = op1 + op2; break;
                case '-': res = op1 - op2; break;
                case '*': res = op1 * op2; break;
                case '/': res = op1 / op2; break;
                case '^': res = pow(op1, op2); break;
                default:
                    printf("Invalid operator: %c\n", expr[i]);
                    exit(1);
            }
            
            // Push result back to stack
            push(res);
        }
    }
    
    // Final result
    return pop();
}

// Driver function
int main() {
    char expr[] = "-+9*26/84"; // Example: Prefix expression
    printf("Result: %d\n", evaluatePrefix(expr));
    return 0;
}

