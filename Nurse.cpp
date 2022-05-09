#include <iostream>
#include <cstring>
#include "User.h"
using namespace std;

class Nurse : public User {
  protected:
    char nurseID[10];
  public:
    Nurse(){
      strcpy (nurseID, "");
    }
    Nurse(char pName[], char pAddress[], char pEmail[], int pPhone, char pNID[]) : User (pName, pAddress, pEmail, pPhone){
      strcpy (nurseID, pNID);
    }
    void getNurseID() {
      cout << "Nurse ID : " << nurseID << endl;
    }
};