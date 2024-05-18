#include <string>
using namespace std;
#ifndef ACCOUNT_H 
#define ACCOUNT_H 
class Account 
{
private:
    int id;
    string password;

public:
    Account();
    Account(int id, string password);
    ~Account();

    int get_id() const;
    string get_password() const;

    void set_id(int id);
    void set_password(string password);
    void create_account(); 
    void login(); 
    void logout(); 
};
#endif







