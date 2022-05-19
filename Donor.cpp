//IT21161056
#include <iostream>
#include <string>
#include "Donor.h"
#include "HealthReport.h"
#define SIZE 2
int i=0;
using namespace std;

Donor::Donor()
{
      donorID = "";
      NIC = "";
      gender = "";
      DoB = "";
      bloodGrp = "";
      reprt[0] = new HealthReport(0);
      reprt[1] = new HealthReport(0);
     }
Donor::Donor(string pName, string pAddress, string pEmail, string pPhone,string did, string nic, string gndr, string DOB, string blgrp,string no1, string no2):User(pName, pAddress, pEmail, pPhone)
{
        donorID = did;
        NIC = nic;
        gender = gndr;
        DoB = DOB;
        bloodGrp = blgrp;
        noOfAppointments = 0;
        reprt[0] = new HealthReport(no1);
        reprt[1] = new HealthReport(no2);
     }
void Donor::DisplayDonorDetails() {
        cout<<"DonorID : "<<donorID<<endl;
        cout<<"NIC : "<<NIC<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Date of Birth : "<<DoB<<endl;
        cout<<"Blood Group : "<<bloodGrp<<endl;
  
        for (int r=0; r<SIZE; r++){
          reprt[r]->getreportdetails();
        }
        for( int i = 0; i < noOfAppointments; i++){
          order[i]-> displayOrders();
        }
}
void Donor::addAppointment(Appointment *A)
{
        if (noOfAppointments < SIZE)
           order[noOfAppointments] = A;
        noOfAppointments++;
}
Donor::~Donor() {
        cout << "******************************"<< endl;
        cout << "Donor Removing " << endl;
        cout<<endl;
        for (int r=0; r<SIZE; r++){
           delete reprt[r];
          }
}

