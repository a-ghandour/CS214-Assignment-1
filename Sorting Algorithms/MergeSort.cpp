#include <bits/stdc++.h>
using namespace std;
template<typename T> void merge(vector<T>& stds, int l, int mid, int r){
    int n = mid - l + 1, m = r-mid;
    T onesub[n], twosub[m];
    for(int i=0; i<n; i++)
        onesub[i] = stds[i+ l];
    for(int i=0; i<m; i++)
        twosub[i] = stds[i + mid+1];
    int i=0, j=0, k=l;

    while(i<n and j<m){
        if(onesub[i] < twosub[j])
            stds[k++] = onesub[i++];
        else
            stds[k++] = twosub[j++];
    }
    for(; i<n; i++)
        stds[k++] = onesub[i];
    for(; j<m; j++)
        stds[k++] = twosub[j];
}

template<typename T> void merge_gpa(vector<T>& stds, int l, int mid, int r){
    int n = mid - l + 1, m = r-mid;
    T onesub[n], twosub[m];
    for(int i=0; i<n; i++)
        onesub[i] = stds[i+ l];
    for(int i=0; i<m; i++)
        twosub[i] = stds[i + mid+1];
    int i=0, j=0, k=l;

    while(i<n and j<m){
        if(onesub[i].get_gpa() >= twosub[j].get_gpa())
            stds[k++] = onesub[i++];
        else
            stds[k++] = twosub[j++];
    }
    for(; i<n; i++)
        stds[k++] = onesub[i];
    for(; j<m; j++)
        stds[k++] = twosub[j];
}


template<typename T> void mergeSort(vector<T>& stds, int l, int r, string type){
    if(l < r){
        int mid = (l+r)/2;
        mergeSort(stds, mid+1, r, type);
        mergeSort(stds, l, mid, type);
        transform(type.begin(), type.end(), type.begin(), ::tolower);
        if(type == "name")
            merge(stds, l, mid, r);
        else
            merge_gpa(stds, l, mid, r);
    }
}
