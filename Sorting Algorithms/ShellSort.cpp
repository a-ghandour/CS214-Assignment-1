#include <bits/stdc++.h>
using namespace std;
template<typename T> void ShellSort(vector<T>& data) {
    int comparisons = data.size();
    for (int space = comparisons / 2; space > 0; space = space/2) {
        for (int i = space; i < comparisons; i++) {
            T temp = data[i];
            int j;
            for ( j = i; j >= space && data[j - space] > temp; j = j-space)
                data[j] = data[j - space];
            data[j] = temp;
        }
    }
}
