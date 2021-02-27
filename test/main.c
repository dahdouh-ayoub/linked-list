#include <stdio.h>
#include "list.h"


// main example
int main()
{
    list list = NULL;

    for (int i = 0; i < 5; i++)
    {
        addfirst(&list, i);
    }

    show(list);
    
    delfirst(&list);
    printf("removing ...\n");
    show(list);

    delfirst(&list);
    printf("removing ...\n");
    show(list);

    dellist(&list);
}