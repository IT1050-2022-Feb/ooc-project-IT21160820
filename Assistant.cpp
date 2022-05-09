#include <iostream>
#include <cstring>
#include "User.h"
using namespace std;

class Assistant : public User {
  protected:
    char empID[10];
  public:
    Assistant() {
      strcpy (empID, "");
    }
    Assistant(char pName[], char pAddress[], char pEmail[], int pPhone, char pEID[]) : User (pName, pAddress, pEmail, pPhone){
      strcpy (empID, pEID);
    }
    void getEmpID(){
      cout << "Assistant ID : " << empID << endl;
    }
};