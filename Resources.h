//Resources class
#include <string>
#include "Examinee.h"
#include <iostream>
using namespace std;

class Resources {   
private : 
   string resType;
   int resNo;
   Examinee *exmi2;
  
public : 
   Resources(){
     resType = "";
     resNo = 0;
   };
   void setResDetails(int rNo);
   void displayRes();
  ~Resources(){
    cout<<"Resources deleted"<<endl;
  }
  
};
