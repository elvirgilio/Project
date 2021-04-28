#include "CustomerProfile.hpp"

void CustomerProfile::setName(string name){
	this -> name = name;
}

string CustomerProfile::getName(){
	return name;
}

void CustomerProfile::setUserName(string userName){
        this -> userName = userName; 
} 

string CustomerProfile::getUserName(){
        return userName;
}

void CustomerProfile::setAge(int age){
        this -> age = age; 
} 

int CustomerProfile::getAge(){
        return age;
}

void CustomerProfile::setEmail(string email){
        this -> email = email; 
} 

string CustomerProfile::getEmail(){
        return email;
}

void CustomerProfile::setPhone(string phone){
        this -> phone = phone; 
} 

string CustomerProfile::getPhone(){
        return phone;
}

void CustomerProfile::view(){
	cout << "Customer Profile : " << endl << endl;
	cout << "Name        : " << name << endl;
	cout << "Age         : " << age << endl;
	cout << "Phone       : " << phone << endl;
	cout << "User name   : " << userName << endl;
	cout <<	"Email       : " << email << endl << endl;
}
