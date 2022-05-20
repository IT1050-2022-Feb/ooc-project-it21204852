//Payment class
#include <string>
#include <iostream>
#include "Examinee.h"
using namespace std;

class Payment{
private:
  int cardNo;
  string transID;
  double amount;
  Examinee *ex1;
  
public:
  Payment(){};
  Payment(int cdNo, double amt){
    cardNo = cdNo;
    amount = amt;
  }
  void validatePay();
  ~Payment(){
    cout<<"Payment deleted"<<endl;
  }
};


