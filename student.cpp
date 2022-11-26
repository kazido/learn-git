#include "student.hpp"

using std::string;
using std::cout;
using std::cin;


Student::Student(int id, string first_name, string last_name, int age) {
    Student::id = id;
    Student::first_name = first_name;
    Student::last_name = last_name;
    Student::age = age;
    cout << "Constructed a student!" << std::endl;
    cout << "ID: " << id << std::endl;
    cout << "Name: " << first_name << " " << last_name << std::endl;
    cout << "Age: " << age << std::endl;

