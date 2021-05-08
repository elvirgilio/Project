#include "Wallet.hpp"

Wallet::Wallet(){
    this->Currency="";
    this->balance=0;
    Reward();
}

Wallet::Wallet(string Currency){
    this->Currency=Currency;
}

void Wallet::setCurrency(string Currency){
    this->Currency=Currency;
}

void Wallet::getCurrency(){
    return this->Currency;
}

double Wallet::getBalance(){
    return this->balance;
}

void Wallet::setBalance(){
    //this->balance-=price;
    //cout<<NEW BALANCE
}
