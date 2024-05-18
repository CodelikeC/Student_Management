#include "account.hpp"
#include <vector> 
#include <utility> 
#include <iostream>
#include <string> 
#include <fstream>
#include <unistd.h> 
#include <bits/stdc++.h> 
using namespace std; 
Account::Account() {
    this->id = 0;
    this->password = "";
}

Account::Account(int id, string password) {
    this->id = id;
    this->password = password;
}
Account ::~Account()
{
    cout <<"The deconstructor of account"<<endl; 
}

int Account::get_id() const {
    return this->id;
}

string Account::get_password() const {
    return this->password;
}

void Account::set_id(int id) {
    this->id = id;
}

void Account::set_password(string password) {
    this->password = password;
}
void Account :: create_account()
{
    while(true)
    {
        cout <<"enter the password:"<< endl; 
        cin>> password; 
        if (password == "")
        {
            cout <<"it is error"<<endl; 
            if (password == "@")
            return ; 
        }
        else if (cin.good())
        {
            cout <<"Success, please continue"<<endl; 
        }
        else
        {
           exit(0); 
        }

        cout <<"enter id : "<<endl; 
        cin >> id;
        if (id > 0)
        {
            cout <<"Your ID is good"<< endl; 
        }
        else 
        {
            cout <<"Error"<< endl; 
        }
    // create a txt file to contain data // 
    cout <<"Containing your password...."<< endl; 
    cout <<"------" << endl;
    // tạo file // 
    ofstream Create("Your_profile" + password + ".txt");

    ifstream check ; // đọc file 
    check.open("Your_profile/" + password + ".txt"); 

    if (check.is_open())
    {
        cout << password << endl; 
    }
    else 
    {
        cout <<"the txt file was error" << endl; 
    }
    check.close(); 
    }
}
void Account :: login()
{
    while (true)
    {
    string new_password; 
    cout <<"repeat the username:"<<endl;
    cin >> new_password; 
    if (new_password != password)
    {
        cout <<"Try again" << endl; 
    }
    else 
    {
        cout <<"Success"<<":"<< password << endl; 
    }

    int new_id; 
    cout <<"repeat the password :"<<endl; 
    cin >> new_id; 
    if (new_id != id)
    {
        cout <<"try again"<<endl; 
        if(id == 0)
        return ; 
    }
    else if (new_id== id)
    {
        cout <<"Success" <<":"<< id << endl; 
    }
    else 
    {
        cout << endl; 
        exit(0); 
    }

    }
}
void Account :: logout()
{
    while (cin.good())
    {
        cout <<"Enter again your password:"<<endl; 
        cin >> password; 
        cout <<"Enter again your id:"<<endl;
        cin>> id; 

        vector<pair<int, string>>data;
        data.push_back(make_pair(id,password)); 
        // sử dụng vòng lặp // 
        for (vector<pair<int, string>>::iterator it = data.begin(); it != data.end(); ++it) 
        {
        
        pair<int, string> element = *it;
        cout << "password: " << element.first << ", username: " << element.second << endl;

        }
    cout <<"admin want to clear the screen" << endl; 
    cout <<"The data on the screen will be deleted in... 1 seconds" << endl;
    
    for (int i = 0; i < 5 ; i++)
    {
        cout <<"Thread is running" << endl; 
        sleep(1);  
    }
    cout <<"wait in 1 second" << endl; 
    cout <<""<< endl; 
    }
} 