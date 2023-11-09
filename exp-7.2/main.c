#include<stdio.h>
#include<stdlib.h>
#include "stack_LL.h"
#include "stack_LL.c"
int main() {
    struct Node* root = NULL;
    int choice, value;
    while(1) {
        printf("\n\n***** MENU *****\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1: 
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                push(&root, value);
                break;
            case 2: 
                value = pop(&root);
                if(value != -1)
                    printf("Popped value : %d", value);
                else
                    printf("Stack is Empty!!! Deletion is not possible!!!");
                break;
            case 3: 
                value = peek(root);
                if(value != -1)
                    printf("Top element : %d", value);
                else
                    printf("Stack is Empty!!!");
                break;
            case 4: 
                exit(0);
            default: 
                printf("\nWrong selection!!! Please try again!!!\n");
        }
    }
}

