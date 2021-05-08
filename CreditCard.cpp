#include"CreditCard.hpp"

CreditCard::CreditCard(){
    this->number=0;
    this->CCV=0;
    this->holderName="";
    this->type="";
    this->expDate="";
}

CreditCard::CreditCard(string holderName, string type){
    this->number=0;
    this->CCV=0;
    this->holderName=holderName;
    this->type=type;
    this->expDate="";
}

int CreditCard::getCCV(){
    return this->CCV;
}

bool CreditCard::validate(long number,int CCV,string expDate,string holderName,string type){
    if (this->number==number && this->expDate==expDate && this->holderName==holderName && this->type==type)
        return true;
    else
        return false;
}

string CreditCard::getExpDate(){
    return this->expDate;
}

string CreditCard::getHolderName(){
    return this->holderName;
}

long CreditCard::getNumber(){
    return this->number;
}

string CreditCard::getType(){
    return this->type;
}
