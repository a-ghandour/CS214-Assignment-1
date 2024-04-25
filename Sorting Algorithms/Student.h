//
// Created by HP on 4/22/2024.
//

#ifndef CS214_ASSIGNMENT_1_STUDENT_H
#define CS214_ASSIGNMENT_1_STUDENT_H
#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string id;
    string name;
    double gpa;
public:
    Student(string sid, string sname, double sgpa);
    bool operator< (Student std);
};


#endif //CS214_ASSIGNMENT_1_STUDENT_H
