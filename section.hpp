#include <iostream> 
#include <bits/stdc++.h>
#include <unistd.h> 
using namespace std; 
#include <cstring> 
#include <vector> 
#ifndef SECTION_H 
#define SECTION_H
class Section 
{
    private : 
    string name_of_course; 
    int quantity_of_student; 
     
    public : 
    Section(); 
    ~Section(); 
    Section(string, int); 
    int get_quantity(); 
    string get_course(); 

    void set_quantity(int quantity_of_student); 
    void set_course(string name_of_course); 

    void getting_staff(); //set up the course name // 
     // looking for getting quantity // 
}; 
#endif





