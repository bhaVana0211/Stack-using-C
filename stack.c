/*WAP to impliment stack operations.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top = -1;
// Function to push an element onto the stack
void push() {
    int value;
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push element.\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}
// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow! No element to pop.\n");
    } else {
        printf("%d popped from the stack.\n", stack[top]);
        top--;
    }
}
// Function to display all elements in the stack
void display() {
    if (top == -1) {
        printf("The stack is empty.\n");
    } else {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
// Function to peek at the top element of the stack
void peek() {
    if (top == -1) {
        printf("The stack is empty. No top element.\n");
    } else {
        printf("The top element is %d.\n", stack[top]);
    }
}
int main() {
    int choice;
    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}