#ifndef WALLET_HPP
#define WALLET_HPP
using namespace std;
class Reward;

class Wallet{
    string Currency;
    double balance;
    Reward reward;
public:
    Wallet();
    Wallet(string);
    void setCurrency(string);
    string getsCurrency();
    double getBalance();
    void setBalance();

};
#endif