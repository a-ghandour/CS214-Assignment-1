//
// Created by HP on 4/22/2024.
//

#include "Student.h"
#include <bits/stdc++.h>
using namespace std;

Student::Student(std::string sid, std::string sname, double sgpa) {
        id = sid;
        name = sname;
        sgpa = gpa;
}

bool Student::operator<(Student std) {
    if(std.name < this->name){
        return true;
    }
    else
        return false;
}