//main program
#include "Exams.h"
#include "Examinee.h"
#include "Resources.h"
#include "examManager.h"
#include "Admin.h"
#include <iostream>

int main() {
  Admin *ad1 = new Admin();
  unregisteredUsers *urUser = new unregisteredUsers();
  Reports *RP = new Reports();
  Exams *ex1 = new Exams();
  Payment *pay1 = new Payment(454585, 8000.00);
  Payment *pay2 = new Payment(425178, 30300.00);
  Examinee *exmi1 = new Examinee();
  Resources *res = new Resources();
  examSupporter *exsup1 = new examSupporter();
  Users *usr1 = new Users();
  examManager *exma1 = new examManager();
  examSupporter *exsup2 = new examSupporter();
  
  RP -> setExamineeList(examinee1);
  RP -> setResultList(examResults1);
  RP -> setEligList(examManager1);
  ex1 -> addPayment(pay1, pay2);
  

  delete ad1;
  delete urUser;
  delete RP;
  delete ex1;
  delete pay1;
  delete pay2;
  delete exmi1;
  delete res;
  delete exsup1;
  delete usr1;
  delete exma1;
  delete exsup2; 
  
}

