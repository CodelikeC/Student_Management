#include <iostream> 
#include "account.hpp"
#include "teacher.hpp"
#include "person.hpp"
#include "student.hpp"
#include "section.hpp"
#include <vector> 
using namespace std ; 

int main ()
{
    while (true)
    {
        Account a ; 
        Person p ; 
        Student s ; 
        Teacher t ; 
        Section S ;  
        cout <<"-------Student Management---------------"<< endl;
        cout <<"-------1.Login--------------------------"<< endl; 
        cout <<"-------2.remove course(student)---------"<< endl; 
        cout <<"-------3.add course(student)------------"<< endl; 
        cout <<"-------4.print info(student)------------"<< endl; 
        cout <<"-------5.print info(teacher)------------"<< endl; 
        cout <<"-------6.print info(person)-------------"<< endl;
        cout <<"-------7.Logout-------------------------"<< endl;
        cout <<"-------8.Create the account-------------"<< endl;
        int select; 
        cout <<"Select options in menu:" << endl; 
        cin >> select ; 

        if (select == 1)
        {
            cout <<"login"<<endl;
            a.login(); 
        }
        else if (select == 2)
        {
            cout <<"remove course"<<endl;
            // s.remove_course();  
        }
        else if (select == 3)
        {
            cout <<"add course"<<endl; 
            //s.add_course(); 
            S.getting_staff(); 
        }
        else if (select == 4)
        {
            cout <<"student info"<<endl;
            s.print_info();  
        }
        else if (select == 5)
        {
            cout <<"teacher info"<<endl; 
            t.print_info(); 
        }
        else if (select == 6 )
        {
            cout <<"Person info"<<endl;
            p.print_info();  
        }
        else if (select == 7)
        {
            cout <<"logout"<<endl; 
            a.logout(); 
        }
        else 
        {
            cout << endl ; 
        }
        return 0 ; 
    }

}