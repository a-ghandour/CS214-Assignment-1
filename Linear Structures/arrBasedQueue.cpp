#include<bits/stdc++.h>
typedef long long ll;
#define speedy iostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define file ::freopen("#######.in","r",stdin);
using namespace std;

                        /*  don't cheat codes But if You do  */
                                /* Better Call Saul */


template <typename T>
class arr_Based_Queue {

private:
    int capacity {0};
    int lastElement {};
    T* arr {nullptr};
    int constlastElement {0};
    int size{0};
public:

    arr_Based_Queue(int capacity) : capacity(capacity), lastElement(capacity-1) ,constlastElement(capacity-1) {
        arr = new T[capacity];
    }

    ~arr_Based_Queue() {
        delete[] arr;
        arr = nullptr;
    }

    void push(T element) {
        assert(!isFull());
        arr[lastElement--] = element;
        size++;
    }

    int isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return lastElement == capacity - 1;
    }

    void print() {
        for (int i = constlastElement; i > lastElement; i--){
            cout << arr[i] << " ";}
        cout << "\n";
    }

    void clear(){
        delete[] arr;
        arr = nullptr;
        size=0;
    }

    T dequeue() {
        assert(!isEmpty());
        size--;
        return arr[constlastElement--];
    }

    T first() {
        assert(!isEmpty());
        return arr[constlastElement];
    }

    int queueSize(){
        return size;
    }

};

int main() {

    arr_Based_Queue <int>queue1(5);
    arr_Based_Queue <char>queue2(5);
    arr_Based_Queue <char>queue3(5);
    for (int i = 0; i < 5; ++i){
       queue1.push(i);
    }

    queue1.print();

    cout<<queue1.queueSize()<<"\n"<<queue1.isFull()<<"\n"<<queue1.isEmpty()<<"\n"<<queue1.first()<<"\n";
    cout<<"first Element Removed: "<<queue1.dequeue()<<"\n";
    queue1.print();
    cout<<queue1.queueSize()<<"\n"<<queue1.isFull()<<"\n"<<queue1.isEmpty()<<"\n"<<queue1.first()<<"\n";

    cout<<"\n===========================================================\n\n";

    queue2.push('A');
    queue2.push('B');
    queue2.push('C');
    queue2.push('D');
    queue2.push('E');

    queue2.print();

    cout<<queue2.queueSize()<<"\n"<<queue2.isFull()<<"\n"<<queue2.isEmpty()<<"\n"<<queue2.first()<<"\n";
    cout<<"first Element Removed: "<<queue2.dequeue()<<"\n";
    queue2.print();
    cout<<queue2.queueSize()<<"\n"<<queue2.isFull()<<"\n"<<queue2.isEmpty()<<"\n"<<queue2.first()<<"\n";

    cout<<"\n===========================================================\n\n";

    queue3.push('A');
    queue3.push('B');
    queue3.push('C');


    queue3.print();

    cout<<queue3.queueSize()<<"\n"<<queue3.isFull()<<"\n"<<queue3.isEmpty()<<"\n"<<queue3.first()<<"\n";
    cout<<"first Element Removed: "<<queue3.dequeue()<<"\n";
    queue3.print();
    cout<<queue3.queueSize()<<"\n"<<queue3.isFull()<<"\n"<<queue3.isEmpty()<<"\n"<<queue3.first()<<"\n";

    cout<<"\n===========================NoRTE===========================\n";

    return 0;
}

//prevent closing .exe
//system("PAUSE");

