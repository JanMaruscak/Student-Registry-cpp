#include "Student.h"

Student::Student(string firstName, string surname)
{
	FirstName = firstName;
	Surname = surname;
}
Student::Student(string firstName, string surname, Address& address)
{
	FirstName = firstName;
	Surname = surname;
	AddAddress(address);
}
void Student::AddAddress(Address& address) {
	Addresses.push_back(address);
}

Student::~Student()
{
}