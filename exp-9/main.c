#include <stdio.h>
#include <stdlib.h>
#include "stack_array.h"
#include "stack_array.c"
int n;
struct Stack* Source;
struct Stack* AUX;
struct Stack* destination;
int item=0;
void TOH(int n, struct Stack* Source, struct Stack* destination, struct Stack* AUX)
{
    if (n < 1) {
        printf("Invalid input for n. n should be 1 or greater.\n");
        return;
    }
    else if (n == 1) {
        int item = peek(Source);
        push(destination, item);
        pop(Source);
        printf("Move disk %d from source to destination\n", item);
        printf("Source: ");
        displayStack(Source);
        printf("AUX: ");
        displayStack(AUX);
        printf("destination: ");
        displayStack(destination);
    }
    else if (n == 2) {
        int item = peek(Source);
        push(AUX, item);
        pop(Source);
        printf("Move disk %d from source to auxiliary\n", item);
        printf("Source: ");
        displayStack(Source);
        printf("AUX: ");
        displayStack(AUX);
        printf("destination: ");
        displayStack(destination);

        item = peek(Source);
        push(destination, item);
        pop(Source);
        printf("Move disk %d from source to destination\n", item);
        printf("Source: ");
        displayStack(Source);
        printf("AUX: ");
        displayStack(AUX);
        printf("destination: ");
        displayStack(destination);

        item = peek(AUX);
        push(destination, item);
        pop(AUX);
        printf("Move disk %d from auxiliary to destination\n", item);
        printf("Source: ");
        displayStack(Source);
        printf("AUX: ");
        displayStack(AUX);
        printf("destination: ");
        displayStack(destination);
    }
    else {
        TOH(n - 1, Source, AUX, destination);

        int item = peek(Source);
        push(destination, item);
        pop(Source);
        printf("Move disk %d from source to destination\n", item);
        printf("Source: ");
        displayStack(Source);
        printf("AUX: ");
        displayStack(AUX);
        printf("destination: ");
        displayStack(destination);
        TOH(n - 1, AUX, destination, Source);
    }
}
int main()
{
    printf("Enter N: ");
    scanf("%d",&n);
    struct Stack* Source=createStack(n);
    struct Stack* AUX=createStack(n);
    struct Stack* destination=createStack(n);
    for (int i = n; i > 0; i--)
    {
        push(Source, i);
        printf("%d is Added to the Source\n", i);
    }
    printf("Source: ");
    displayStack(Source);
    printf("AUX: ");
    displayStack(AUX);
    printf("destination: ");
    displayStack(destination);
    TOH(n,Source,destination,AUX);
}
 