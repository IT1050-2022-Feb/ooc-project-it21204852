//Reports class
#include<string>
#include "examResults.h"
#include "Examinee.h"
#include "examManager.h"
#include<iostream>
using namespace std;

class Reports{
private:
string examID;
string empID;
public:
Reports(){
examID="";
empID="";
}
Reports(string pexamID,string pempID){
  examID = pexamID;
  empID = pempID;
}
void setResultList(examResults *er);
void setExamineeList(Examinee *exami);
void setEligList(examManager *em);
void displayReport();
~Reports(){
  cout<<"reports deleted"<<endl;
  }
};
