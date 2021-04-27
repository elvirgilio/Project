#ifndef CREDITCARD_HPP
#define CREDITCARD_HPP
class CreditCard{
    long number;
    int CCV;
    string expDate;
    string holderName;
    string type;    
public:
    CreditCard();
    CreditCard(string,string);
    int getCCV();
    bool validate(long, int,string,string,string);
    string getExpDate();
    string getHolderName();
    string getNumber();
    string getType();
};
#endif