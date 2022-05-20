//unregisteredUsers class
#include <string>
#include <iostream>
using namespace std;

class unregisteredUsers{
private:
  string empID;
  string userName;
  string address;
  string password;
  int mobileNo;
  int NIC;
  int bDay;
  int bMonth;
  int bYear;

public:
  unregisteredUsers(){
    empID = "";
    userName = "";
    address = "";
    password = "";
    mobileNo = 0;
    NIC = 0;
    bDay = 0;
    bMonth = 0;
    bYear = 0;
  }
  void setUserDetails(string eID, string uName, string addr, string pw, string mNo, int NIC, int bD, int bM, int bY);
  void registerSystem();
  ~unregisteredUsers(){
    cout<<"unregisteredUsers deleted"<<endl;
  }
};