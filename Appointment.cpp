//IT21162732

#include <iostream>
#include <string>
#include "Appointment.h"
#include "Donor.h"


using namespace std;

Appointment::Appointment(string appointmentNO, string appointmentLO, string appointmentDate,Donor *Don){
		appNO=appointmentNO;
		appLocation=appointmentLO;	
		appDate=appointmentDate;
		Don = pDon;
    Don->addAppointment(this);	
    }
void Appointment::displayAppointmentDetails(){
		cout << "Appointment NO :" << appNO << endl;
    cout << "Appointment Location :" << appLocation << endl;
    cout << "Appointment Date :" << appDate << endl;
   }
Appointment::~Appointment(){
		cout << "Deleting Appointment" << appNO << endl;

	}