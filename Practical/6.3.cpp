#include <iostream>
using namespace std;
/*Inheritance Example 
o Write a program that implements inheritance using a base class Person and derived 
classes Student and Teacher. Demonstrate reusability through inheritance. 
o Objective: Learn the concept of inheritance.*/

// Base class
class Person {
protected:
    string name;
    int age;
public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string course;
public:
    void setStudent(string n, int a, string c) {
        setData(n, a);
        course = c;
    }
    void displayStudent() {
        display();
        cout << "Course: " << course << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    double salary;
public:
    void setTeacher(string n, int a, double s) {
        setData(n, a);
        salary = s;
    }
    void displayTeacher() {
        display();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student s;
    s.setStudent("Vishal", 20, "Computer Science");
    s.displayStudent();

    Teacher t;
    t.setTeacher("Rajesh", 40, 50000);
    t.displayTeacher();

    return 0;
}