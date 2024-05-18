#include "Student.hpp"
#include <iostream> 
 
Student::Student(int id, string password, string name, int age, float gpa, int tuition_fee, string location)
: Account(id, password), Person(name, age) 
{
    this->gpa = gpa;
    this->tuition_fee = tuition_fee;
    this->location = location;
}
Student :: ~Student()
{
    cout <<"The Deconstructor of Student"<<endl;  
}
Student :: Student()
{
    // code right here // 
    gpa = 0.0 ; 
    tuition_fee = 0 ; 
    location = ""; 
}

float Student::get_gpa() const {
    return this->gpa;
}

int Student::get_tuition_fee() const {
    return this->tuition_fee;
}

string Student::get_location() const {
    return this->location;
}

void Student::set_gpa(float gpa) {
    this->gpa = gpa;
}

void Student::set_tuition_fee(int tuition_fee) {
    this->tuition_fee = tuition_fee;
}

void Student::set_location(string location) {
    this->location = location;
}

void Student::print_info() {
    Person::print_info();
    std ::cout << "GPA: " << this->gpa << std:: endl;
    std ::cout << "Tuition fee: " << this->tuition_fee << std:: endl;
    std ::cout << "Location: " << this->location << std ::endl;
    std ::cout << "Registered courses: ";
    for (int i = 0; i < this->registered_course.size(); i++) {
        std ::cout << registered_course[i] << "|";
    }
    std :: cout << std:: endl;
}

void Student::add_course(string taking_course) 
{
    this->registered_course.push_back(taking_course);
}

void Student::remove_course(string course) {
    for (int i = 0; i < this->registered_course.size(); i++){
        if (course == this->registered_course[i]){
            this->registered_course.erase(this->registered_course.begin()+i);
        }
    }
}