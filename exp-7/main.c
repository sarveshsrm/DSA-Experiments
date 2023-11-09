#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "stack_array.h"
#include "stack_array.c"
int main() {
    struct Stack* stack = createStack(5);
    int choice, item;
    while (1) {
        printf("Stack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter item to push: ");
                scanf("%d", &item);
                push(stack, item);
                printf("\n");
                break;
            case 2:
                item = pop(stack);
                if (item != INT_MIN)
                    printf("%d popped from stack\n", item);
                else
                    printf("Stack underflow!\n");
                break;
            case 3:
                item = peek(stack);
                if (item != INT_MIN)
                    printf("Top element: %d\n", item);
                else
                    printf("\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
