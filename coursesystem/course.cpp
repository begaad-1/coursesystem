#include "course.h"

void course::registerStudent(string studentName)
{
    if (numStudents < 10) { // Check if the maximum limit has been reached
        registeredStudents[numStudents++] = studentName; // Add the student and increment the count
        cout << "Student " << studentName << " registered successfully for course " << name << endl;
    }
    else {
        cout << "Cannot register more students. Limit reached." << endl;
    }
}

void course::listStudents()
{
    cout << "Registered students for course " << name << " (" << code << "):" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << i + 1 << ". " << registeredStudents[i] << endl;
    }
}

void course::setname(string Name)
{
    name = Name;
}

void course::setcode(string Code)
{
    code = Code;
}

course::course()
{
    name = "non";
    code = "000";
}
