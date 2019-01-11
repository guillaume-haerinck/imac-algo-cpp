#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/**
 * @brief LinkedList
 * 
 */
typedef struct node {
    int value;
    struct node* next;
} Node, *LinkedList;

/**
 * @brief add an item at the beginning of the list
 * 
 * @param head 
 * @param val 
 * @return EXIT_FAILURE
 * @return EXIT_SUCCESS
 */
int list_pushStart(LinkedList* head, int val);

/**
 * @brief Print the full list on screen
 * 
 */
void list_print(LinkedList list);

#endif // LINKED_LIST_H
