#include<bits/stdc++.h>
#include "BubbleSort.cpp"
#include "InsertionSort.cpp"
#include "MergeSort.cpp"
#include "QuickSort.cpp"
#include "SelectionSort.cpp"
#include "ShellSort.cpp"
#include "Student.h"
#include "Student.cpp"
using namespace std;

template<typename T>void readFile(vector<T>& data, int& n);
template<typename T>void writeFile(vector<T>& data, long long& compCount, double& time, string algo, string type);
int main (){
    vector<Student>std_arr;
    int n;
    readFile(std_arr, n);
    cout<<"Enter a number to select the sort algorithm you want\n"<<"1-Bubble\n2-Insertion\n3-Merge\n4-Quick\n5-Selection\n6-Shell\n";
    int choice;
    cin>>choice;
    long long comps=0;
    double runTime;
    auto end = std::chrono::high_resolution_clock::now();
    auto start = std::chrono::high_resolution_clock::now();
    string type;
    switch (choice) {
        case 1:
            cout<<"\nChoose sorting criteria:\n1-Sort by name\n2-Sort by GPA\nEnter your choice: ";
            cin>>type;
            start = std::chrono::high_resolution_clock::now();
            bubbleSort(std_arr,type, comps);
            end = std::chrono::high_resolution_clock::now();
            runTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
            writeFile(std_arr, comps, runTime, "Bubble Sort", type);
            break;
        case 2:
            cout<<"\nChoose sorting criteria:\n1-Sort by name\n2-Sort by GPA\nEnter your choice: ";
            cin>>type;
            start = std::chrono::high_resolution_clock::now();
            insertionSort(std_arr, type, comps);
            end = std::chrono::high_resolution_clock::now();
            runTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
            writeFile(std_arr, comps, runTime, "Insertion Sort", type);
            break;
        case 3:
            cout<<"\nChoose sorting criteria:\n1-Sort by name\n2-Sort by GPA\nEnter your choice: ";
            cin>>type;
            start = std::chrono::high_resolution_clock::now();
            mergeSort(std_arr, 0, n - 1, type, comps);
            end = std::chrono::high_resolution_clock::now();
            runTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
            writeFile(std_arr, comps, runTime, "Merge Sort", type);
            break;
        case 4:
            cout<<"\nChoose sorting criteria:\n1-Sort by name\n2-Sort by GPA\nEnter your choice: ";
            cin>>type;
            start = std::chrono::high_resolution_clock::now();
            quickSort(std_arr, 0, n, type, comps);
            end = std::chrono::high_resolution_clock::now();
            runTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
            writeFile(std_arr, comps, runTime, "Quick Sort", type);
            break;
        case 5:
            cout<<"\nChoose sorting criteria:\n1-Sort by name\n2-Sort by GPA\nEnter your choice: ";
            cin>>type;
            start = std::chrono::high_resolution_clock::now();
            selectionSort(std_arr, type, comps);
            end = std::chrono::high_resolution_clock::now();
            runTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
            writeFile(std_arr, comps, runTime, "Selection Sort", type);
            break;
        case 6:
            cout<<"\nChoose sorting criteria:\n1-Sort by name\n2-Sort by GPA\nEnter your choice: ";
            cin>>type;
            start = std::chrono::high_resolution_clock::now();
            shellSort(std_arr, type, comps);
            end = std::chrono::high_resolution_clock::now();
            runTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
            writeFile(std_arr, comps, runTime, "Shell Sort", type);
            break;
        default:
            start = std::chrono::high_resolution_clock::now();
            quickSort(std_arr, 0, n, "name", comps);
            end = std::chrono::high_resolution_clock::now();
            runTime = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
            writeFile(std_arr, comps, runTime, "Quick Sort", "name");
            break;
    }
}

template<typename T>void readFile(vector<T>& data, int& n){
    ifstream input("../Sorting Algorithms/students.txt");
    if(!input.is_open()){
        cout<<"ERROR opening the file!\n";
        return;
    }
    string line;
    input>>n;
    for(int i=0; i<n; i++){
        input.ignore();
        getline(input, line);
        string sname = line;
        string sid;
        double sgpa;
        input>>sid>>sgpa;
        Student std(sname, sid, sgpa);
        data.push_back(std);
    }
    input.close();
}

template<typename T>void writeFile(vector<T>& data, long long& compCount, double& time, string algo, string type){
    time *= 1e-9;
    fstream output;
    if(type == "name")
        output.open("../Sorting Algorithms/SortedByName.txt", ios::in|ios::out|ios::app);
    else
        output.open("../Sorting Algorithms/SortedByGPA.txt", ios::in|ios::out|ios::app);

    output<<"Algorithm is: "<<algo<<'\n';
    output<<"Number Of Comparisons is "<<compCount<<'\n';
    output<<"The execution time is "<< fixed <<time<< setprecision(9)
          <<" sec"<<'\n';
    for(const auto& i : data){
        output<<i;
    }
    output<<endl<<endl;
    output.close();
}