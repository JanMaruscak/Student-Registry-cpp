#include <iostream>
#include "Student.h"
#include <vector>

int main()
{
	Student student1("Idealni1", "Dite");
	Student student2("Idealni2", "Dite");
	Student student3("Idealni3", "Dite");
	Student student4("Idealni4", "Dite");

	std::vector<Student> students = { student1, student2, student3, student4 };

	std::cout << student1.FirstName << ", " << student1.Surname;
}