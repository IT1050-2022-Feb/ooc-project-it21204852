//examManager class
#include "examSupporter.h"
#include<string>
#include<iostream>
using namespace std;


class examManager: public examSupporter{
private:
string examID;
string date;
string time;
string resID;
string resDate;


public:
examManager(){
examID="";
date="";
time="";
resID="";
resDate="";
}
void sheduleExam(string pexamID,string pdate,string ptime);
void update(string pxamID,string pempName);
void selectEliglist();
~examManager(){
  cout<<"examManager deleted"<<endl;
  }

};
