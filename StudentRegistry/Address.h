#pragma once
#include <string>
using namespace std;
enum Type {
	PermanentResidence,
	MailingAddress,
	LegalRepresentative
};

class Address {
private:
public:
	Address();
	~Address();
	string State;
	string City;
	string Street;
	string NoOfDescriptive;
	string ReferenceNumber;
	string Zip;
	Type _Type;
	string Description;
};