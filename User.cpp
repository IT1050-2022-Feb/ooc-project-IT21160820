//IT21160820

#include <iostream>
#include <string>
#include "User.h"
using namespace std;

User::User(){
  name = "";
  address = "";
  email = "";
  phoneNo = 0;
}

User::User(string pName, string pAddress, string pEmail, int pPhone){
  name = pName;
  address = pAddress;
  email = pEmail;
  phoneNo = pPhone;
}

void User::getUserDetails(){
  cout << "Enter Name : " << name << endl;
  cout << "Enter Address : " << address << endl;
  cout << "Enter Email : " << email << endl;
  cout << "Enter Phone No : " << phoneNo << endl;
}