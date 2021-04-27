#ifndef INVOICE_HPP
#define INVOICE_HPP
#include "Payment.hpp"
class Invoice{
    Payment payment;
public:
    Invoice();
    void printInvoice();
    void sendByEmail();
    void delivery();    
};
#endif
