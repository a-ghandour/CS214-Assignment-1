#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H
#include <iostream>
using namespace std;
template <typename t>
class Node{
public:
    t data;
    Node<t> *next;
};
template <typename t>
class linkedlist{
public:
    Node<t> *head;
    linkedlist();
    void insertAtHead(t newvalue);
    void insertAtTail(t newvalue);
    void insertAt(t newvalue,int index);
    void removeAtHead ();
    void removeAtTail ();
    void removeAt (int index);
    void retrieveAt (int index);
    void replaceAt (t newElement, int index);
    bool isExist(t item);
    bool isItemAtEqual (t element, int index);
    void swap (int index1, int index2);
    bool isempty();
    int linkedListSize();
    void clear ();
    void print();
};
#endif
