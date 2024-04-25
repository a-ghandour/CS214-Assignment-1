#include <bits/stdc++.h>
#include "Student.h"
using namespace std;
void BubbleSort(vector<Student>& data) {
    int comparisons = data.size();
    for (int i = 0; i < comparisons - 1; i++) {
        for (int j = 0; j < comparisons - i - 1; j++) {
            if (data[j] > data[j + 1])
                swap(data[j], data[j + 1]);
        }
    }
}
