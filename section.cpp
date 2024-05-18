#include "section.hpp"
#include <vector> 
using namespace std; 

Section :: Section()
{
    cout <<"The constructor for Section class"<<endl; 
    name_of_course = ""; 
    quantity_of_student = 0 ; 
}
Section :: Section(string name_of_course, int quantity_of_student)

{
    this -> name_of_course = name_of_course; 
    this -> quantity_of_student = quantity_of_student; 
}
Section :: ~Section()
{
    cout <<"The deconstructor for Section class"<<endl; 
}

void Section :: set_quantity(int quantity_of_student)
{
    this -> quantity_of_student = quantity_of_student; 
}
int Section  :: get_quantity()
{
    return this -> quantity_of_student; 
}

void Section :: set_course(string name_of_course)
{
    this -> name_of_course = name_of_course; 
}
string Section :: get_course()
{
    return this -> name_of_course; 
}
void Section :: getting_staff() // this function could interact with the add and remove course in student.cpp
{
    vector<Section*> s;
    Section *section_1 = new Section(); 
    Section *section_2 = new Section(); 

    s.push_back(section_1); 
    s.push_back(section_2); 
    cout <<"The size of the Section is :"<<s.size()<<endl; 
    // edit 
    s[0]-> set_quantity(100); 
    s[0]-> set_course("CS 256"); 
    
    cout <<"the course name was:"<< get_course()<<endl; 
    cout <<"The quantity of the course is :"<<get_quantity()<<endl;

}