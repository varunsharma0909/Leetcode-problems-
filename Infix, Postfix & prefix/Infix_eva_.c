#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100  

// Global stacks and top pointers
int operandStack[MAX], operatorStack[MAX];
int operandTop = -1, operatorTop = -1;

// Function prototypes
void pushOperand(int value);
int popOperand();
void pushOperator(char op);
char popOperator();
char peekOperator();
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

// Function to push an operand onto the stack
void pushOperand(int value) {
    if (operandTop == MAX - 1) {
        printf("Operand stack overflow\n");
        exit(1);
    }
    operandStack[++operandTop] = value;
}

// Function to pop an operand from the stack
int popOperand() {
    if (operandTop == -1) {
        printf("Operand stack underflow\n");
        exit(1);
    }
    return operandStack[operandTop--];
}

// Function to push an operator onto the stack
void pushOperator(char op) {
    if (operatorTop == MAX - 1) {
        printf("Operator stack overflow\n");
        exit(1);
    }
    operatorStack[++operatorTop] = op;
}

// Function to pop an operator from the stack
char popOperator() {
    if (operatorTop == -1) {
        printf("Operator stack underflow\n");
        exit(1);
    }
    return operatorStack[operatorTop--];
}

// Function to get the top operator without popping
char peekOperator() {
    if (operatorTop == -1) return -1;
    return operatorStack[operatorTop];
}

// Function to return precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Function to perform an operation and return the result 
int applyOperation(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return b ? (a / b) : 0; //Avoid diviison when b = 0
    default: return 0;
    }
}
int evaluationInfnix(const char* expression ){
    operandTop= operatorTop  =-1 ;
    int  i;
    for (i =0 ; expression[i] != '\0'; i++){
        char ch = expression[i];

        if(isdigit(ch)){
            pushOperand(ch -'0'); 
        }
        else if (ch == '('){
            pushOperand(ch);
        }
        else  if (ch ==')'){
            while (operatorTop != -1 && peekOperator() !='('){
                int b= popOperand();
                int a = popOperand();
                char op= popOperator();
                pushOperand(applyOperation(a,b,op));
            }
        }
    }

    while (operatorTop != -1){
        int b= popOperand();
        int a = popOperand();
        char op= popOperator();
        pushOperand(applyOperation(a,b,op));
    }
    return popOperand();
}

