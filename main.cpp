#include <iostream>
#include <string>
#include "Appointment.h"
#include "Assistant.h"
#include "BudgetReport.h"
#include "campaign.h"
#include "Donor.h"
#include "HealthReport.h"
#include "Nurse.h"
#include "Order.h"
#include "User.h"

using namespace std;

int main() {
  
  Appointment *app = new Appointment("A001" , "Colombo" , "05-06-2022");
  app -> displayAppointmentDetails();

  Assistant *assi = new Assistant("001" , "O001" , "BR001" , "Nimali" , "Nugegoda" , "nimali69@yahoo.com" , "0712965678" , "Em002");
  assi -> displayEmpID();

  BudgetReport *br = new BudgetReport("BR001");
  br -> displayBudgetReport();

  campaign *c = new campaign ("001" , "Piliyandala" , "06-10-2022");
  c -> displayEventDetails();

  Donor *d = new Donor("Kasun" , "Malabe" , "kasun@gmail.com" , "0777771235" , "D002" , "695236841V" , "male" , "11-02-1969" , "A+" , "H001" , "H005");
  d -> DisplayDonorDetails();

  HealthReport *hr = new HealthReport("H001");
  hr -> getreportdetails();

  Nurse *n = new Nurse("A001" ,"H001" , "Kamani" , "Badulla" , "kamani@yahoo.com" , "0715236982" , "N005");
  n -> getNurseID();

  Order *or = new Order("O001" , "20-06-2022");
  or -> dispalyOrderDetais();
  
  
  return 0;
}