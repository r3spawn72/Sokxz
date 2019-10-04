#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class Student {

public:
    int id;
    string name;
    float marks;

    Student() {

    id = 25;
    name = "Aditya Verma";
    marks = 100;

    }

    void display() {

    cout<<"Id = "<<id<<"\nName = "<<name<<"\nMarks = "<<marks<<endl;

    }

};

int main() {

Student s1;
s1.display();

return 0;
}
