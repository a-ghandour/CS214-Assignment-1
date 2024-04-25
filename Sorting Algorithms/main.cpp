#include<bits/stdc++.h>
#include "BubbleSort.cpp"
#include "InsertionSort.cpp"
#include "SelectionSort.cpp"
#include "ShellSort.cpp"
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
    getline(input, line);
    int n = stoi(line);
    vector<Student>std_arr;
    for(int i=0; i<n; i++){
        getline(input, line);
        string sname = line;
        getline(input, line);
        string sid = line;
        getline(input, line);
        double sgpa = stod(line);
        Student std(sname, sid, sgpa);
        std_arr.push_back(std);
    }
    input.close();
    ofstream output("../Sorting Algorithms/studentssorted.txt");
    for(auto i : std_arr){
        output<<i;
    }
    output.close();
}