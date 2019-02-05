#include "linked-list.h"
#include <stdlib.h>
#include <stdio.h>

int list_pushStart(LinkedList* head, int val) {
    Node* newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("error list_push: cannot allocate memory\n");
        return EXIT_FAILURE;
    }

    newNode->value = val;
    newNode->next = *head;
    *head = newNode;
    return EXIT_SUCCESS;
};

void list_print(LinkedList head) {
    while(head != NULL) {
        printf("%d\n", head->value);
        head = head->next;
    }
};