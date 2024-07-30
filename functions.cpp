#include <iostream>
#include "f_headers.h"
using namespace std;


Node * init(){
    int n;
    Node * head = NULL;

    cout << "Enter Number of elements >> ";
    cin>> n;
    cout<<endl;

    int content;
    Node *temp;

    for(int i=0;i<n; i++){
        cout<<"Enter the "<<i+1<<"th element >> ";
        cin>>content;
        cout<<endl;

        Node *node = new Node();
        node->content = content;
        node->next = NULL;

        if(i == 0){
            head = node;
            temp = head;
        }
        else {
            temp->next = node;
            temp = node;
        }
    }

    return head;
}

void display_list(Node *head){
    Node *temp = head;
    int i = 1;
    while (temp != NULL) {
        cout<<"- " + i <<"th content = "<<temp->content<<endl;
        temp = temp->next;
    }
}

Node* insertAtBegin(Node *head){
    int value;

    cout<<"- Enter the node value >> ";
    cin>>value;
    cout<<endl;

    Node *node = new Node();
    node->content = value;

    node->next = head;
    head = node;

    return head;
}

void insertAtTheEnd(Node *head){
    int value;

    cout<<"- Enter the node value >> ";
    cin>>value;
    cout<<endl;

    Node *node = new Node();
    node->content = value;
    node->next = NULL;

    Node *temp = head;
    while (temp->next!= NULL){
        temp = temp->next;
    }

    temp->next = node;
}