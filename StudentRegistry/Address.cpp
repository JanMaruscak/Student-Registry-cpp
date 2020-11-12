#include "Address.h"

Address::Address(string state, string city, string street, string addressNumber, string referenceNumber, string zip, AddressType _type, string description)
{
	State = state;
	City = city;
	Street = street;
	AddressNumber = addressNumber;
	ReferenceNumber = referenceNumber;
	Zip = zip;
	_Type = _type;
	Description = description;
}
Address::~Address()
{
}