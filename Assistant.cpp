//IT21160820

#include <iostream>
#include <string>
#include "Assistant.h"
using namespace std;

Assistant::Assistant(){};

Assistant::Assistant(campaign *c, Order *or, BudgetReport *b, string pName, string pAddress, string pEmail, int pPhone, string pEID) : User (pName, pAddress, pEmail, pPhone){
    empID = pEID;
    camp = c;
    order = or;
    budget = b;
}

void Assistant::displayEmpID(){
      cout << "Assistant ID : " << empID << endl;
      camp -> displayEventDetails();
      order -> displayOrderDetails();
      budget -> displayDetails();
      budget -> calcBudget();
}

Assistant::~Assistant() {};