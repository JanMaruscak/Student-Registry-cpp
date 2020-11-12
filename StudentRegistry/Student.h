#pragma once
#include "Address.h"
#include <string>
#include <vector>
using namespace std;
class Student {
private:
public:
	Student(string firstName, string surname);
	Student(string firstName, string surname, Address& address);
	~Student();
	string FirstName;
	string Surname;
	void AddAddress(Address& address);
	std::vector<Address> Addresses;
};