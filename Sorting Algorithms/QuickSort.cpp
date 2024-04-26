#include <bits/stdc++.h>
#include "Student.h"
using namespace std;

int partition(vector<Student>& std, int l, int r){
    auto piv = std[l];
    int i=l, j=r;
    while(i < j){
        do{
            i++;
        }
        while(std[i] >= piv and i<r);
        do {
            j--;
        }
        while(std[j] < piv and j>l);
        if(i < j)
            swap(std[i], std[j]);
    }
    swap(std[l], std[j]);
    return j;
}

int partition_gpa(vector<Student>& std, int l, int r){
    auto piv = std[l];
    int i=l, j=r;
    while(i < j){
        do{
            i++;
        }
        while(std[i].get_gpa() >= piv.get_gpa() and i < r);
        do {
            j--;
        }
        while(std[j].get_gpa() < piv.get_gpa() and j > l);
        if (i < j)
            swap(std[i], std[j]);
    }
    swap(std[l], std[j]);
    return j;
}

void quickSort(vector<Student>& std, int l, int r, string type){
    if(l >= r)
        return;
    int piv;
    transform(type.begin(), type.end(), type.begin(), ::tolower);
    if(type == "name")
        piv = partition(std, l, r);
    else if(type == "gpa")
        piv = partition_gpa(std, l, r);
    quickSort(std, l, piv, type);
    quickSort(std, piv+1, r, type);
}