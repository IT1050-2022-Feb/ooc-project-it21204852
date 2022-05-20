//Examinee class
#include <string>
#include <iostream>
using namespace std;


class Examinee : public Users{
private:
  string examID;
  string empName;
  string fbID;
  Resources *recs[10];
  Payment *p1[2];
  Exams *exm1[2];
 
  

public:
  Examinee(){
  examID="";
  empName="";
  fbID="";
}
  
  void registerExams(string pxamID,string pempName){};
  void setFeedback(string fbackID){};
  void getUserDetails();
  void checkResults();
  ~Examinee(){
  cout<<"examinee deleted"<<endl;
  }

};
