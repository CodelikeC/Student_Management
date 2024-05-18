#include "iostream"
#include <string>
using namespace std;
#ifndef PERSON_H 
#define PERSON_H 
class Person 
{
private:
    string name;
    int age;

public:
    Person();
    Person(string name, int age);
    ~Person();

    string get_name() const;
    int get_age() const;

    void set_name(string name);
    void set_age(int age);

    virtual void print_info();
};
#endif 