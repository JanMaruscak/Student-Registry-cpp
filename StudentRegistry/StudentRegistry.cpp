#include <iostream>
#include "Student.h"
#include <vector>

std::vector<Student> Students;
//void RemoveStudent(Student& student) {
//	Students.erase(Students.begin() + 1);
//}
void AddStudent(Student& student) {
	Students.push_back(student);
}
int main()
{
	setlocale(LC_ALL, "");
	Address address("CZE", "Hradec Králové", "Hradecká", "1151", "12", "500 03", AddressType(PermanentResidence), "Trvalé bydlištì áka");
	Student student1("Idealni1", "Dite");
	Student student2("Idealni2", "Dite", address);
	Student student3("Idealni3", "Dite", address);
	Student student4("Idealni4", "Dite", address);
	student1.AddAddress(address);

	AddStudent(student1);
	AddStudent(student2);
	AddStudent(student3);
	AddStudent(student4);

	for (auto& student : Students) // access by reference to avoid copying
	{
		std::cout << student.FirstName << ", " << student.Surname << "\n";
		std::cout << student.Addresses[0].City << ", " << student.Addresses[0].AddressNumber << "\n";
		std::cout << "..." << "\n";
	}
}