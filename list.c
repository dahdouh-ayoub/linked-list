#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// verify if list is empty
int isempty(list list)
{
    if (!list)
        return 1;
    return 0;
}

// get data from the head of the list.
data getdata(list list)
{
    if (isempty(list))
    {
        printf("Error: The list is empty!\n");
        exit(1);
    }
    return list->info;
}

// get next node in the list.
node *getnext(list list)
{
    if (isempty(list))
    {
        printf("Error: The list is empty!\n");
        exit(1);
    }
    return list->next;
}

// add element to list.
void addfirst(list *list, data data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->info = data;
    new_node->next = *list;
    *list = new_node;
}

// remove element from list.
void delfirst(list *list)
{
    if (!isempty(*list))
    {
        node *tmp = *list;
        *list = getnext(*list);
        free(tmp);
    }
}

// destroy list.
void dellist (list *list)
{
    while (!isempty(*list))
    {
        delfirst(list);
    }
}

// display list.
void show(list list)
{
    if (!isempty(list))
    {
        printf("%d -> ", getdata(list));
        list = getnext(list);
        show(list);
    }
    else
        printf("NULL\n");
}
