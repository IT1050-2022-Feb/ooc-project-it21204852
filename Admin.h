#include "unregisteredUsers.h"
#include "Reports.h"
#include <string>
#include <iostream>
using namespace std;

class Admin{
private:
  string empID;
  unregisteredUsers *ur1;
  Reports *r1;

public: 
  Admin(){
    empID = "";
  };
  void addUser();
  void deleteUser();
  void updateUser(string eID);
  ~Admin(){
    cout<<"Admin deleted"<<endl;
  };
  
};