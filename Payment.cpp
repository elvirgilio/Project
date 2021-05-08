#include "Payment.hpp"
#include <iostream>
using namespace std;
Payment::Payment(){
    this->payMoney=0;
    this->paid= false;
}

Payment::Payment(double payMoney){
    this->payMoney=payMoney;
    this->paid=false;
}

void Payment::pay(){
    this->paid=true;

}

void Payment::discount(int NORes){
  switch (NORes)
  {
      case 0:  {break;}
      case 5:  { payMoney-=payMoney*0.05; break; cout<<"You won a discount of  5%.\n";}
      case 10: { payMoney-=payMoney*0.10; break; cout<<"You won a discount of 10%.\n";}
      case 15: { payMoney-=payMoney*0.15; break; cout<<"You won a discount of 15%.\n";}
      case 20: { payMoney-=payMoney*0.20; break; cout<<"You won a discount of 20%.\n";}
      case 25: { payMoney-=payMoney*0.25; break; cout<<"You won a discount of 25%.\n";}
      default: { payMoney-=payMoney*0.30;break;  cout<<"You won a discount of 30%.\n";}
  }  
}

double Payment::getPayMoney(){
    return payMoney;
}

void Payment::setPayMoney(double payMoney){
    this->payMoney=payMoney;
}

bool Payment::isPaid(){
    return this->paid;
}
