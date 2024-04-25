#include <bits/stdc++.h>
#include "Student.h"
using namespace std;
void selectionSort(vector<Student>& data) {
    int comparisons = data.size();
    for (int i = 0; i < comparisons - 1; i++) {
        int Minimum = i;
        for (int j = i + 1; j < comparisons; j++) {
            if (data[j] < data[Minimum])
                Minimum = j;
        }
        if (Minimum != i)
            swap(data[Minimum],data[i] );
    }
}
