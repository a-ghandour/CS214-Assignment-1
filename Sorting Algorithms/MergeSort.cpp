#include <bits/stdc++.h>
#include "Student.h"
using namespace std;
void merge(vector<Student>& stds, int l, int mid, int r){
    int n = mid - l + 1, m = r-mid;
    Student onesub[n], twosub[m];
    for(int i=0; i<n; i++)
        onesub[i] = stds[i+ l];
    for(int i=0; i<m; i++)
        twosub[i] = stds[i + mid+1];
    int i=0, j=0, k=l;

    while(i<n and j<m){
        if(onesub[i] < twosub[0])
            stds[k++] = onesub[i++];
        else
            stds[k++] = twosub[j++];
    }
    for(; i<n; i++)
        stds[k++] = onesub[i];
    for(; j<m; j++)
        stds[k++] = twosub[j];
}

void merge_gpa(vector<Student>& stds, int l, int mid, int r){
    int n = mid - l + 1, m = r-mid;
    Student onesub[n], twosub[m];
    for(int i=0; i<n; i++)
        onesub[i] = stds[i+ l];
    for(int i=0; i<m; i++)
        twosub[i] = stds[i + mid+1];
    int i=0, j=0, k=l;

    while(i<n and j<m){
        if(onesub[i].get_gpa() < twosub[0].get_gpa())
            stds[k++] = onesub[i++];
        else
            stds[k++] = twosub[j++];
    }
    for(; i<n; i++)
        stds[k++] = onesub[i];
    for(; j<m; j++)
        stds[k++] = twosub[j];
}


void mergeSort(vector<Student>& stds, int l, int r, string type){
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
