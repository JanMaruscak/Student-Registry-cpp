#pragma once
#include "Address.h"
#include <string>
#include <vector>
using namespace std;
class Student {
private:
public:
	Student(string firstName, string Surname);
	~Student();
	string FirstName;
	string Surname;
	std::vector<Address> Addresses;
};