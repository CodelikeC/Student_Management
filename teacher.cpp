#include <iostream>
#include "teacher.hpp" 
using namespace std ; 
Teacher::Teacher(int id, string password, string name, int age, int salary, string major)
: Account(id, password), Person(name, age) {
    this->salary = salary;
    this->major = major;
}
Teacher :: Teacher()
{
    salary = 0 ; 
    major = ""; 
}
Teacher :: ~Teacher()
{
    cout <<"The deconstuctor of teacher"<<endl; 
}

int Teacher::get_salary() const {
    return this->salary;
}

string Teacher::get_major() const {
    return this->major;
}

void Teacher::set_salary(int salary) {
    this->salary = salary;
}

void Teacher::set_major(string major) {
    this->major = major;
}

void Teacher::print_info() {
    Person::print_info();
    std :: cout << "Salary: " << this->salary << endl;
    std ::cout << "Major: " << this->major << endl;
}
