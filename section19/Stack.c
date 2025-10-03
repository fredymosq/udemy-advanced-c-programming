#include <stdio.h>

int main() {
    int stack[100];
    int top = -1; // Initialize top of stack

    // Push elements onto stack
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    // Pop elements from stack
    while (top != -1) {
        printf("%d popped from stack\n", stack[top--]);
    }

    return 0;
}