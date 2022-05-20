//Exams class
#include "Examinee.h"
#include "examResults.h"
#include "Payment.h"
#include <iostream>
#include <string>
using namespace std;
#define SIZE 5

class Exams{
private: 
  examResults *results[2];
  Payment *payment[SIZE];
  string examID;
  string enrlKey;
  int eDay;
  int eMonth;
  int eYear;
  int eHour;
  int eMinutes;
  Examinee *exminee[2];

public:
  Exams(){
    examID = "";
    enrlKey = "";
    eDay = 0;
    eMonth = 0;
    eYear = 0;
    eHour = 0;
    eMinutes = 0;
    results[0] = new examResults[50];
    results[1] = new examResults[35];
    
  }
  void addPayment(Payment *p1, Payment *p2)
{
  payment[0] = p1;
  payment[1] = p2;
  
}
  void addExaminee(Examinee *exmi);
  void displayExamSchedule();
  void inputResults();
  void verifyEnrlKey();
  ~Exams(){
    cout<<"Exams deleted"<<endl;
    for(int i = 0; i < 2; i++)
        delete results[i];

    }
      
};
