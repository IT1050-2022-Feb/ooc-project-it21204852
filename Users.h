//Users class
#include <string>
#include <iostream>
using namespace std;


class Users {
protected:
string empID;
string password;

public:
Users(){
  empID = "";
  password = "";
}
  void setCred(string eID,string pw);
  void validateCred();
  ~Users(){
  cout<<"Users deleted"<<endl;
}
};
