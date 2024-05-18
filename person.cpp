#include "person.hpp"

Person::Person() {
    this->name = "";
    this->age = 0;
}

Person::Person(string name, int age) 
{
    this->name = name;
    this->age = age;
}
Person :: ~Person()
{
    cout <<"Deconstructor"<<endl; 
}

string Person::get_name() const {
    return this->name;
}


int Person::get_age() const {
    return this->age;
}

void Person::set_name(string name) {
    this->name = name;
}

void Person::set_age(int age) {
    this->age = age;
}

void Person::print_info() {
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
}