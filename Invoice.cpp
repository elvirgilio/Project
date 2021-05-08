#include "Invoice.hpp"
#include <iomanip>
#include <iostream>

//class Customer;
using namespace std;
Invoice::Invoice(){
    Payment();
}

void Invoice::printInvoice(){
    if (payment.isPaid())
        cout<<"Amount Paid:"<<fixed<<setprecision(5)<<payment.getPayMoney()<<endl;
    else
        cout<<"Amount not paid. Please recheck the payment and try again.\n";
}

void Invoice::sendByEmail(){
    //EMAIL TO CUSTOMER>GETEMAIL();
}

void delivery(){
    //COUT DELIVERED
}