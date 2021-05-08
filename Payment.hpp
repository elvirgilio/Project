#ifndef PAYMENT_HPP
#define PAYMENT_HPP

class Payment{
    double payMoney;
    bool paid;

public:
    Payment();
    Payment(double);
    void pay();
    void discount(int NORes);
    double getPayMoney();
    void setPayMoney (double);
    bool isPaid();

};

#endif