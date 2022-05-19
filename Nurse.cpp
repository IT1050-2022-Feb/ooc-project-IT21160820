//IT21160820

#include <iostream>
#include <string>
#include "Nurse.h"
using namespace std;

Nurse::Nurse() {};

Nurse::Nurse(appointment *ap, Healthreport *h, string pName, string pAddress, string pEmail, int pPhone, string pNID) : User (pName, pAddress, pEmail, pPhone) {
  nurseID = pNID;
  appoint = ap;
  health = h;
}

void Nurse::getNurseID() {
  cout << "Nurse ID : " << nurseID << endl;
  appoint -> displayAppointmentDetails();
  health -> getreportdetails();
}

Nurse::~Nurse() {};