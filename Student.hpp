#include "person.hpp"
#include "account.hpp"
#include <vector>
#ifndef STUDENT_H
#define STUDENT_H

class Student : public Person, public Account {
private:
    float gpa;
    int tuition_fee;
    string location;
    vector <string> registered_course;

public:
    Student();
    Student(int id, string password, string name, int age, float gpa, int tuition_fee, string location);
    ~Student();

    float get_gpa() const;
    int get_tuition_fee() const;
    string get_location() const;

    void set_gpa(float gpa);
    void set_tuition_fee(int tuition_fee);
    void set_location(string location);

    void print_info() override;

    void add_course(string taking_course);
    void remove_course(string course);
};
#endif 
