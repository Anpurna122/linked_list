#include "dl.h"
int main()
{
    Node *head=NULL,*tail=NULL;

    add_end(&head, &tail, 5);
    add_end(&head, &tail, 10);
    add_end(&head, &tail, 15);
    add_begin(&head, &tail, 0);
    add_end(&head, &tail, 20);
    add_end(&head, &tail, 25);
    traverse_next(head);
    traverse_prev(tail);
    return 0;
}

