// Factory Workers Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


class Employee
{
public:
	string getName()
	{
		string name;
		cout << "What is the name of your employee?";
		cin >> name;
	}
	double getNumber()
	{
		double number;
		cout << "What is the number of this employee?";
		cin >> number;
	}
	double getHireDate()
	{
		double hireDate;
		cout << "When was this employee hired?";
		cin >> hireDate;
	}
	
};

int main()
{
	Employee employee;
	employee.getName();
	employee.getNumber();
	employee.getHireDate();



}