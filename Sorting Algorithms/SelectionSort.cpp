#include <bits/stdc++.h>
using namespace std;
template<typename T> void selectionSort(vector<T>& data, string type) {
    int comparisons = data.size();
    for (int i = 0; i < comparisons - 1; i++) {
        int Minimum = i;
        for (int j = i + 1; j < comparisons; j++) {
            if(type == "name"){
                if (data[j] < data[Minimum])
                    Minimum = j;
            }
            else {
                if (data[j].get_gpa() >= data[Minimum].get_gpa())
                    Minimum = j;
            }
        }
        if (Minimum != i)
            swap(data[Minimum],data[i] );
    }
}
