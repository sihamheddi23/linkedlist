#include "f_headers.h"

int main() {
    // init the linked list
    Node *head = init();

    // traverse linked list
    display_list(head);

    // insert in the begining
    head = insertAtBegin(head);

    // insert at the end
    insertAtTheEnd(head);

    display_list(head);
    return 0;
}
