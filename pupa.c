#include "monty.h"

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;

// Push an element onto the stack
void push(int value) {
    if (top == STACK_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }

    top++;
    stack[top] = value;
}

// Print all elements in the stack
void pall() {
    int i;
    for (i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}
