#pragma once
#include <string>
using namespace std;
enum AddressType {
	PermanentResidence,
	MailingAddress,
	LegalRepresentative
};

class Address {
private:
public:
	Address(string state, string city, string street, string addressNumber, string referenceNumber, string zip, AddressType _type, string description);
	~Address();
	string State;
	string City;
	string Street;
	string AddressNumber;
	string ReferenceNumber;
	string Zip;
	AddressType _Type;
	string Description;
};