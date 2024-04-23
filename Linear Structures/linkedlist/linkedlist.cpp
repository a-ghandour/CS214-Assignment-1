#include "linkedlist.h"
 linkedlist::linkedlist() {
     head = NULL;
 }
 //======================================================================
void linkedlist::insertAtHead(int newvalue){
    Node* newnode = new Node();
    newnode->data = newvalue;
    if (isempty()){
        newnode->next = NULL;
        head = newnode;
    }
    else{
        newnode->next = head;
        head = newnode;
    }
}
//======================================================================
void linkedlist::insertAtTail(int newvalue){
    if (isempty())
        insertAtHead(newvalue);
    else {
        Node *newnode = new Node();
        newnode->data = newvalue;
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
    }
}
//======================================================================
void linkedlist::insertAt(int newvalue,int index) {
    if (index < linkedListSize()) {
        Node *newnode = new Node();
        newnode->data = newvalue;
        Node *temp = head;
        int num = 0;
        while (num != index-1){
            num++;
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    else
        cout<<"not found";
}
//======================================================================
void linkedlist::removeAtHead() {
    if (head == nullptr) {
        cout << "empty list" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}
//======================================================================
void linkedlist::removeAtTail() {
    if (head == nullptr) {
        cout << "Empty list" << endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node *current = head;
    while (current->next != nullptr && current->next->next != nullptr) {
        current = current->next;
    }

    delete current->next;
    current->next = nullptr;
}
//======================================================================
void linkedlist::removeAt(int index) {
    if (head == nullptr) {
        cout << "empty list" << endl;
        return;
    }

    if (index == 0) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *current = head;
    Node *previous = nullptr;
    int count = 0;

    while (current != nullptr && count != index) {
        previous = current;
        current = current->next;
        count++;
    }

    if (current == nullptr) {
        cout << "Index doesnt exist" << endl;
        return;
    }
    previous->next = current->next;
    delete current;
    }
//======================================================================
void linkedlist::retrieveAt (int index){
    int num = 0; //++ to eqaul index
    Node* temp = head;
    int cnt = linkedListSize();
    if (cnt < index){
        cout<<"index bigger than linkedlist lenth";
        return;
    }
    else {
        while (num != index) {
            num++;
            temp = temp->next;
        }
        cout << temp->data << " ";
    }
}
//======================================================================
void linkedlist::replaceAt (int newElement, int index){
    int num = 0; //++ to eqaul index
    Node* temp = head;
    int cnt = linkedListSize();
    if (cnt < index){
        cout<<"index bigger than linkedlist lenth";
        return;
    }
    while (num != index){
        num++;
        temp = temp->next;
    }
    temp->data = newElement;
}
//======================================================================
bool linkedlist::isExist(int item){
    bool found = false;
    Node* temp = head;
    while (temp != NULL){
        if (temp->data == item)
            found = true;
        temp = temp->next;
    }
    return found;
}
//======================================================================
bool linkedlist::isItemAtEqual (int element, int index) {
    int num = 0; //++ to eqaul index
    Node* temp = head;
    int cnt = linkedListSize();
    if (cnt < index){
        cout<<"index bigger than linkedlist lenth";
        return false;
    }
    while (num != index){
        num++;
        temp = temp->next;
    }
    if (temp->data == element)
        return true;
    else
        return false;
}
//======================================================================
void linkedlist::swap (int index1, int index2){
    if (index1 > index2)
        swap(index1,index2);
    int num = 0; //++ to eqaul index
    Node* temp1 = head;
    Node* temp2 = head;
    int cnt = linkedListSize();
    if (cnt < index2){
        cout<<"index2 bigger than linkedlist lenth";
        return ;
    }
    while (num != index1-1){
        num++;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while (num != index2-1){
        num++;
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    //shift
    temp1 = temp1->next;
    temp2 = temp2->next;
    //swap
    Node *temp1_next = temp1->next;
    temp1->next = temp2->next;
    temp2->next = temp1_next;
}
//======================================================================
bool linkedlist::isempty(){
    return (head == NULL);
}
//======================================================================
int linkedlist::linkedListSize() {
    int counter = 0;
    Node* temp = head;
    while (temp != NULL){
        counter++;
        temp = temp->next;
    }
    return counter;
};
//======================================================================
void linkedlist::clear (){
    int cnt = linkedListSize();
    for (int i = 0; i < cnt; ++i) {
        Node* delptr = head;
        head = head->next;
        delete delptr;
    }
}
//======================================================================
void linkedlist::print() {
    Node* temp = head;
    while (temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
}
//======================================================================