#include <stdio.h>

#include "linked-list.h"

int main(int argc, char const *argv[])
{
    LinkedList list = NULL;
    list_pushStart(&list, 42);
    list_pushStart(&list, 2);
    list_print(list);
    return 0;
}
