//IT21160820

#pragma once
#include "User.h"
#include "Healthreport.h"
#include "appointment.h"


class Nurse : public User {
  private:
    string nurseID;
    Healthreport *rpt;
    appointment *appoint;
  public:
    Nurse();
    Nurse(appointment *ap, Healthreport *prpt, string pName, string pAddress, string pEmail, int pPhone, string pNID) : User (pName, pAddress, pEmail, pPhone);
    void getNurseID();
    ~Nurse();
};