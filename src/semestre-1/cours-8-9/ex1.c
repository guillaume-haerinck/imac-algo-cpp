#include <stdio.h>
#include <stdlib.h>

// gcc -Wall -O2 ex1.c -o ex1.exe

typedef struct list {
    int value;
    struct list* next;
} list;

void printList(list* head) {
    list* current = head;
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
}

void push(list* head, int value) {
    list* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* add a new variable to the end of the list */
    current->next = malloc(sizeof(list));
    current->next->value = value;
    current->next->next = NULL;
}

void pop(list* head) {
    /* if there is only one item */
    if (head->next == NULL) {
        free(head);
        return;
    }

    /* find the item before the last */
    list* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    /* remove the last value */
    current->next = NULL;
    free(current->next);
}

int main() {
    list* head = NULL;
    head = malloc(sizeof(list));
    head->value = 0x808080;

    push(head, 0x000000); // black
    push(head, 0xFF0000); // red
    push(head, 0xC0C0C0); // metal
    pop(head);
    printList(head);
}
