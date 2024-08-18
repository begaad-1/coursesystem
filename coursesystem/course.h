#include <iostream>
#include <string>

using namespace std;


#pragma once
class course

{
public:
    string name;
    string code;
    string registeredStudents[10]; // Fixed-size array for registered students

    int numStudents = 0; // Keep track of the number of registered students

    course(string n, string c) : name(n), code(c) {}

    void registerStudent(string studentName);
    void listStudents();
    void setname(string Name);
    void setcode(string Code);
    course();
};