//
// Created by HP on 4/22/2024.
//

#include "Student.h"
#include <bits/stdc++.h>
using namespace std;

Student::Student(string sname, string sid, double sgpa) {
        id = sid;
        name = sname;
        sgpa = gpa;
}

Student::Student() = default;

bool Student::operator<(Student std) {
    if(std.name < this->name){
        return true;
    }
    else
        return false;
}

ostream& operator<<(ostream& out, const Student& std){
    out<<std.name<<'\n'<<std.id<<'\n'<<std.gpa<<'\n';
    return out;
}
