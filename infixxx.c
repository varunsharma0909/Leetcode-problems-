#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MAX 100  

// Stack structure for operands and operators
typedef struct {
    int top;
    int items[MAX];
} Stack;

// Function prototypes
void push(Stack* s, int value);
int pop(Stack* s);
int peek(Stack* s);
int precedence(char op);
int applyOperation(int a, int b, char op);
int evaluateInfix(const char* expression);

int main() { 
    char expression[MAX];
    
    printf("Enter infix expression: ");
    scanf("%s", expression);
    
    int result = evaluateInfix(expression);
    printf("Result: %d\n", result);
    
    return 0;
}

// Function to push an element onto the stack
void push(Stack* s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    s->items[++(s->top)] = value;
}

// Function to pop an element from the stack
int pop(Stack* s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return s->items[(s->top)--];
}

// Function to get the top element of the stack
int peek(Stack* s) {
    if (s->top == -1) return -1;
    return s->items[s->top];
}

// Function to return precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Function to perform an operation and return the result
int applyOperation(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b ? (a / b) : 0;  // Avoid division by zero
        default: return 0;
    }
}

// Function to evaluate an infix expression
int evaluateInfix(const char* expression) {
    Stack operandStack = { .top = -1 };
    Stack operatorStack = { .top = -1 };

    for (int i = 0; expression[i] != '\0'; i++) {
        char ch = expression[i];

        // If the character is a number, push it to operand stack
        if (isdigit(ch)) {
            push(&operandStack, ch - '0');
        }
        // If it's an opening parenthesis, push to operator stack
        else if (ch == '(') {
            push(&operatorStack, ch);
        }
        // If it's a closing parenthesis, process operators until '(' is found
        else if (ch == ')') {
            while (operatorStack.top != -1 && peek(&operatorStack) != '(') {
                int b = pop(&operandStack);
                int a = pop(&operandStack);
                char op = pop(&operatorStack);
                push(&operandStack, applyOperation(a, b, op));
            }
            pop(&operatorStack);  // Remove '(' from stack
        }
        // If it's an operator
        else {
            while (operatorStack.top != -1 && precedence(peek(&operatorStack)) >= precedence(ch)) {
                int b = pop(&operandStack);
                int a = pop(&operandStack);
                char op = pop(&operatorStack);
                push(&operandStack, applyOperation(a, b, op));
            }
            push(&operatorStack, ch);
        }
    }

    // Process remaining operators
    while (operatorStack.top != -1) {
        int b = pop(&operandStack);
        int a = pop(&operandStack);
        char op = pop(&operatorStack);
        push(&operandStack, applyOperation(a, b, op));
    }

    // Final result is in operand stack
    return pop(&operandStack);
}

