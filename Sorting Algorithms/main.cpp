#include<bits/stdc++.h>
//#include "BubbleSort.cpp"
//#include "InsertionSort.cpp"
#include "SelectionSort.cpp"
//#include "ShellSort.cpp"
#include "MergeSort.cpp"
#include "QuickSort.cpp"
#include "Student.h"
#include "Student.cpp"
using namespace std;

int main (){
    ifstream input("../Sorting Algorithms/students.txt");
    if(!input.is_open()){
        cout<<"ERROR opening the file!\n";
        return 0;
    }
    string line;
    int n;
    input>>n;
    vector<Student>std_arr;
    for(int i=0; i<n; i++){
        input.ignore();
        getline(input, line);
        string sname = line;
        string sid;
        double sgpa;
        input>>sid>>sgpa;
        Student std(sname, sid, sgpa);
        std_arr.push_back(std);
    }
    input.close();
    mergeSort(std_arr, 0, n-1, "gpa");
    ofstream output("../Sorting Algorithms/studentssssorted.txt");
    for(const auto& i : std_arr){
        output<<i;
    }

    output.close();
}