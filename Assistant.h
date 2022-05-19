//IT21160820

#pragma once
#include "User.h"
#include "campaign.h"
#include "BudgetReport.h"
#include "Order.h"

class Assistant : public User {
  protected:
    string empID;
    campaign *camp;
    Order *order;
    BudgetReport *budget;
  public:
    Assistant();
    Assistant(campaign *c, Order *or, BudgetReport *b, string pName, string pAddress, string pEmail, int pPhone, string pEID) : User (pName, pAddress, pEmail, pPhone);
    void displayEmpID();
    ~Assistant();
};