#ifndef TICKET_HPP
#define TICKET_HPP
#include "Payment.hpp"

class Reservation;

class Ticket{
    Reservation reservation;
    Payment payment;
public:
    Ticket();
    void print_ticket();
        
};
#endif