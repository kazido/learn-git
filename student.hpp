#pragma once
#include <iostream>
#include <string>

using std::string;

class Student
{
private:
    int id;
    string first_name;
    string last_name;
    int age;
public:
    Student(int new_id, string first_name, string last_name, int age);
    int set_id(int new_value) { id = new_value; }
    int get_id() { return id; }
};