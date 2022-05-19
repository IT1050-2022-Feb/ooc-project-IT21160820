//IT21160370
#pragma once

class Order{
private:
    string orderNO;
    string orderDate; 

public: 
    Order();
    Order(string Onumber,string Odate);
    void dispalyOrderDetais();
    ~Order();
};