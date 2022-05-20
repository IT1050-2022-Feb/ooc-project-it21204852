//examSupporter class
#include "Users.h"
#include <string>
#include <iostream>
using namespace std;

class examSupporter : public Users{
protected:
string fbID;

private:
string ansDate;
int faqNo;

public:
examSupporter(){
  fbID = "";
  ansDate = "";
  faqNo = 0;
}
void getFeedback();
void inputAnswers();
void updateFAQ();
~examSupporter(){
  cout<<"examSupporter deleted"<<endl;
}
};
