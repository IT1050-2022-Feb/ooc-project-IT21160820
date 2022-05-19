//IT21160820

#pragma once

class User {
  protected:
    string name;
    string address;
    string email;
    int phoneNo;
  public:
    User();
    User(string pName, string pAddress, string pEmail, int pPhone);
    void getUserDetails();
};