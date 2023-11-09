#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int tree[MAX_SIZE];

void initializeTree() {
    for (int i = 0; i < MAX_SIZE; i++) {
        tree[i] = -1; // Initialize tree nodes to -1 (indicating empty)
    }
}

void insertNode(int value, int index) {
    if (tree[index] == -1) {
        tree[index] = value;
    } else {
        printf("Parent node is already occupied.");
    }
}

void displayTree(int size) {
    printf("Tree elements: ");
    for (int i = 0; i < size; i++) {
        if (tree[i] != -1) {
            printf("%d ", tree[i]);
        } else {
            printf("- ");
        }
    }
    printf("\n");
}

int main() {
    initializeTree();

    insertNode(1, 0); // Insert root
    insertNode(2, 1); // Insert left child of root
    insertNode(3, 2); // Insert left child of node 2
    insertNode(4, 1); // Attempt to insert right child of root (position already occupied)

    displayTree(4); // Display the tree: 1 2 - - 3 - - -

    return 0;
}
