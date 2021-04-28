#include "Customer.cpp"

void Customer::add_res(Reservation r){
	reservations.push_back(r);
}

Reservation *Customer::get_res(string id){
	 vector <Customer>::iterator it;
   	 for (it = reservations.begin(); it != reservations.end(); it++)
   	 {
       		 if (it->getID() == id)
       		 {
           		 return &*it;
       		 }
   	 }
}

void Customer::cancelRes(string id){
	vector <Customer>::iterator it;
         for (it = reservations.begin(); it != reservations.end(); it++)
         {
                 if (it->getID() == id)
                 {
                        it = reservations.erase(it);
			exit;
                 }
         }
}
