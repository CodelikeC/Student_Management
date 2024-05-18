#include "person.hpp"
#include "account.hpp"
#ifndef TEACHER_H
#define TEACHER_H 
class Teacher : public Person, public Account {
private:
    int salary;
    string major;

public:
    Teacher(int id, string password, string name, int age, int salary, string major);
    Teacher(); 
    ~Teacher(); 

    int get_salary() const;
    string get_major() const;

    void set_salary(int salary);
    void set_major(string major);

    void print_info() override;
};
#endif 