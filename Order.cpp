//IT21160370
#include "Order.h"
#include <iostream>
#include <string>
using namespace std;

Order::Order(){};

Order::Order(string Onumber,string Odate){
        orderNo= Onumber;
        orderDate=Odate;
    }
void Order :: dispalyOrderDetais(){
        cout << "Order No : " << orderNo << endl;
        cout << "Order Date : " << orderDate << endl;
    }
Order::~Order(){};