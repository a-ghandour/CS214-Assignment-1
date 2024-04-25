#include <bits/stdc++.h>
#include "Student.h"
using namespace std;
void insertionSort(vector<Student>& data){
    int comparisons = data.size();
    for (int i = 1; i < comparisons; ++i) {
        T key = data[i];
        int j = i - 1;
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}
