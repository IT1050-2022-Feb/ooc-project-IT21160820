//IT21160820

#include <iostream>
#include <cstring>
#include "User.h"
using namespace std;

User::User(){
  strcpy (name, "");
  strcpy (address, "");
  strcpy (email, "");
  phoneNo = 0;
}

User::User(char pName[], char pAddress[], char pEmail[], int pPhone){
  strcpy (name, pName);
  strcpy (address, pAddress);
  strcpy (email, pEmail);
  phoneNo = pPhone;
}

void User::getUserDetails(){
  cout << "Enter Name : " << name << endl;
  cout << "Enter Address : " << address << endl;
  cout << "Enter Email : " << email << endl;
  cout << "Enter Phone Number : " << phoneNo << endl;
}