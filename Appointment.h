//IT21162732

#pragma once
#include <string>
#include "Donor.h"
#include "campaign.h"

using namespace std;

class Donor;
class campaign;

class Appointment
{
  private:
	string appNO;
	Donor *Don;
	string appLocation;
	string appDate;
   
   public: 
 	  Appointment(string appointmentNO, string appointmentLO, string appointmentDate,Donor *Don);
   	void displayAppointmentDetails();
   	~Appointment();
   	
};