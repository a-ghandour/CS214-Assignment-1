#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H
#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
class linkedlist{
public:
    Node* head;
    linkedlist();
    void insertAtHead(int newvalue);
    void insertAtTail(int newvalue);
    void insertAt(int newvalue,int index);
    void removeAtHead ();
    void removeAtTail ();
    void removeAt (int index);
    void retrieveAt (int index);
    void replaceAt (int newElement, int index);
    bool isExist(int item);
    bool isItemAtEqual (int element, int index);
    void swap (int index1, int index2);
    bool isempty();
    int linkedListSize();
    void clear ();
    void print();
};
#endif
