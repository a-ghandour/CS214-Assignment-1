#include "linkedlist.h"
#include "linkedlist.cpp"
//o insertAtHead (elementType element) : void obaaaaaaaa
//o insertAtTail (elementType element) : void obaaaaa
//o insertAt (elementType element, int index) : void obaaaaaaa
//o removeAtHead () : void fhmt
//o removeAtTail () : void fhmt
//o removeAt (int index) : void fhmt
//o retrieveAt (int index): elementType fhmt  gm
//o replaceAt (elementType newElement, int index) fhmt   gm
//o isExist (elementType element) : bool obaaaa
//o isItemAtEqual (elementType element, int index) : bool fhmt gm
//o swap (int firstItemIdx, int secondItemIdx) : void // swap two nodes without swapping fhmt     g
//o isEmpty () : bool  obaaaa
//o linkedListSize () : int obaaaaa
//o clear (): void fhmt gm
//o print () : void obaaaaa

int main() {
    linkedlist myList;
    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "1. InsertAtHead" << endl;
        cout << "2. insertAtTail" << endl;
        cout << "3. insertAt" << endl;
        cout << "4. removeAtHead" << endl;
        cout << "5. removeAtTail" << endl;
        cout << "6. removeAt" << endl;
        cout << "7. retrieveAt" << endl;
        cout << "8. replaceAt" << endl;
        cout << "9. isExist" << endl;
        cout << "10. isItemAtEqual" << endl;
        cout << "11. swap" << endl;
        cout << "12. isEmpty" << endl;
        cout << "13. linkedListSize" << endl;
        cout << "14. clear" << endl;
        cout << "15. Print" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int newValue;
                cout << "Enter the value to insert at the head: ";
                cin >> newValue;
                myList.insertAtHead(newValue);
                break;
            }
            case 2: {
                int newValue;
                cout << "Enter the value to insert at the tail: ";
                cin >> newValue;
                myList.insertAtTail(newValue);
                break;
            }
            case 3: {
                int newValue;
                int index;
                cout << "Enter the value: ";
                cin >> newValue;
                cout << "Enter index: ";
                cin >> index;
                myList.insertAt(newValue,index);
                break;
            }
            case 4: {
                cout << "removed head ";
                myList.removeAtHead();
                break;
            }
            case 5: {
                cout << "removed tail ";
                myList.removeAtTail();
                break;
            }
            case 6: {
                int newValue;
                cout << "remove at index ";
                cin >> newValue;
                myList.removeAt(newValue);
                break;
            }
            case 7: {
                int newValue;
                cout << "retrieve at index ";
                cin >> newValue;
                myList.retrieveAt(newValue);
                break;
            }
            case 8: {
                int newElement;
                int index;
                cout << "replace at newElement ";
                cin >> newElement;
                cout << "replace at index ";
                cin >> index;
                myList.replaceAt (newElement,index);
                break;
            }
            case 9: {
                int newValue;
                cout << "enter value ";
                cin>>newValue;
                if (myList.isExist(newValue) == 0)
                    cout<<"not Exist"<<endl;
                else
                    cout<<"yes is Exist"<<endl;
                break;
            }
            case 10: {
                int index;
                int element;
                cout << "enter value ";
                cin >> element;
                cout << "enter index ";
                cin >> index;
                if (myList.isItemAtEqual (element,index) == 0)
                    cout<<"no"<<endl;
                else
                    cout<<"yes"<<endl;
                break;
            }
            case 11: {
                int newValue;
                int newValue2;
                cout << "enter first index ";
                cin >> newValue;
                cout << "enter second index ";
                cin >> newValue2;
                myList.swap(newValue,newValue2);
                break;
            }
            case 12: {//is empty
                int newValue;
                if (myList.isempty() == 0)
                    cout<<"no"<<endl;
                else
                    cout<<"yes"<<endl;
                break;
            }
            case 13: {
                int newValue;
                cout << "size is ";
                cout<<myList.linkedListSize () <<endl;
                break;
            }
            case 14: {
                int newValue;
                myList.clear();
                break;
            }
            case 15: {
                cout << "Linked List: ";
                myList.print();
                break;
            }
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}