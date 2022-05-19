//IT21160820

#pragma once

class User {
  protected:
    char name[20];
    char address[30];
    char email[30];
    int phoneNo;
  public:
    User();
    User(char pName[], char pAddress[], char pEmail[], int pPhone);
    void getUserDetails();
};