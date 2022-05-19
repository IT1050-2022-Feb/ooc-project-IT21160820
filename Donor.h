//IT21161056
#pragma once
#pragma once
#include <string>
#include "HealthReport.h"
#include "User.h" 

#define SIZE 2

using namespace std;

class Donor:public User{
   protected:
    string donorID;
    string NIC;
    string gender;
    string DoB;
    string bloodGrp;
    HealthReport *reprt[SIZE];
    Appointment *order[SIZE];
		int noOfAppointments;

   public:
     Donor();
     Donor(string pName, string pAddress, string pEmail, string pPhone,string did, string nic, string gndr, string DOB, string blgrp,string no1, string no2);
        void addAppointment(Appointment *A);
		void displayDonorDetails();
     ~Donor();
};