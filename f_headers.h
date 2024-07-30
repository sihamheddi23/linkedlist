//
// Created by siham on 30/07/2024.
//

#ifndef LINKEDLIST_F_HEADERS_H
#define LINKEDLIST_F_HEADERS_H

struct Node {
    int content;
    Node * next;
};

Node * init();

void display_list(Node *head);

Node* insertAtBegin(Node *head);

void insertAtTheEnd(Node *head);

#endif //LINKEDLIST_F_HEADERS_H
