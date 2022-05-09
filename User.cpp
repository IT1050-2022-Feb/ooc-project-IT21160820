#include <iostream>
#include <cstring>
using namespace std;

class User {
  protected:
    char name[20];
    char address[30];
    char email[30];
    int phoneNo;
  public:
    User(){
      strcpy (name, "");
      strcpy (address, "");
      strcpy (email, "");
      phoneNo = 0;
    };
    User(char pName[], char pAddress[], char pEmail[], int pPhone){
      strcpy (name, pName);
      strcpy (address, pAddress);
      strcpy (email, pEmail);
      phoneNo = pPhone;
    }
    void getUserDetails(){
      cout << "Enter Name : " << name << endl;
      cout << "Enter Address : " << address << endl;
      cout << "Enter Email : " << email << endl;
      cout << "Enter Phone Number : " << phoneNo << endl;
    }
};
