#ifndef __LIST_H__
#define __LIST_H__

/*  if your have just one variable as data.  */
typedef int data;

/*  else use a struct.   */
// typedef struct data
// {
//     int info;
//     // ...
// } data;

typedef struct node
{
    // your data
    data info;

    // a pointer to next node
    struct node *next;
} node, *list;

int isempty(list list);
data getdata(list list);
node *getnext(list list);
void addfirst(list *list, data data);
void delfirst(list *list);
void dellist (list *list);
void show(list list);

#endif