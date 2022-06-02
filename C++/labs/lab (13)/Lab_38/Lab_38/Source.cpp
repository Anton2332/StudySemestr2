#include<conio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<Windows.h>
#include<iomanip>


using namespace std;

void audit(int a)
{
	try
	{
		if (a < 0)
			throw 1;
	}
	catch(int e)
	{
		if (e == 1)
		{
			cout << "You cannot enter negative values" << endl;
		}
	}
}

void audit2(float a)
{
	try
	{
		if (a < 0)
			throw 1;
	}
	catch (int e)
	{
		if (e == 1)
		{
			cout << "You cannot enter negative values" << endl;
		}
	}
}

void audit3(int a)
{
	try {
		if (a > 2021)
			throw 2;
	}
	catch(int e)
	{
		if (e == 2)
		{
			cout << "the year of issue cannot be greater than the current year" << endl;
		}

	}
}

class employee
{
	HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
	string lastname;
protected:
	int age,drivingexperience;
public:
	employee()
	{
		lastname = '0';
		age = 18;
		drivingexperience = 1;
	}

	employee(int age2)
	{
		lastname = "as";
		age = age2;
		drivingexperience = 1;
	}

	void change_employee()
	{
		SetConsoleTextAttribute(a, 13);
		cout << setw(45) << "Enter the last name : ";
		cin >> lastname;
		cout << setw(45) << "Enter your age : ";
		cin >> age;
		audit(age);
		cout << setw(45) << "Enter your driving experience : ";
		cin >> drivingexperience;
		audit(drivingexperience);
	}

	void output_employee()
	{
		SetConsoleTextAttribute(a, 11);
		cout << setw(45) << "Your last name : "<<lastname<<endl;
		cout << setw(45) << "Your age : " << age << endl;
		cout << setw(45) << "Your driving experience : " << drivingexperience << endl;
	}

	void determining_employee()
	{
		cout << "Determining the beginning of driving : " << 2021 - drivingexperience << endl;
	}

};

class car
{
	HANDLE b = GetStdHandle(STD_OUTPUT_HANDLE);
	int registration_number;
	float car_run;
	string brand;
protected:
	int year_of_issue;
public:
	car()
	{
		registration_number = 1;
		brand = "mers";
		year_of_issue = 2001;
		car_run = 100;
	}

	car(int car_run2)
	{
		registration_number = 1;
		brand = "mers";
		year_of_issue = 2001;
		car_run = car_run2;
	}

	void change_car()
	{
		SetConsoleTextAttribute(b, 3);
		cout << setw(45) << "Enter the register number : ";
		cin >> registration_number;
		cout << setw(45) << "Enter the brand : ";
		cin >> brand;
		cout << setw(45) << "Enter the year of issue  : ";
		cin >> year_of_issue;
		audit3(year_of_issue);
		cout << setw(45) << "Enter the mileage of the machine : ";
		cin >> car_run;
		audit2(car_run);
	}

	void output_car()
	{
		SetConsoleTextAttribute(b, 12);
		cout << setw(45) << "Register number : ";
		cout << registration_number << endl;
		cout <<setw(45)<< "Brand : " << brand << endl;
		cout << setw(45) << "Year of issue : " << year_of_issue << endl;
		cout << setw(45) << "Mileage of the machine : " << car_run << endl;
	}

	void average_car_run()
	{
		cout << "Average mileage of the car : " << float(car_run) / float(2021 - year_of_issue) << endl;

	}

};

class driver : private employee,private car
{
	HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
	int year_of_use;
	bool prisence_of_fines;
public:
	void change_driver()
	{
		cout << "////////////////////////////////////////////////////////////////////////////////////////" << endl;
		change_employee();
		cout << "////////////////////////////////////////////////////////////////////////////////////////" << endl;
		change_car();
		cout << "////////////////////////////////////////////////////////////////////////////////////////" << endl;
		SetConsoleTextAttribute(c, 2);
		cout << setw(45) << "Enter the year the car started to be used by the driver : ";
		cin >> year_of_use;
		audit3(year_of_use);
		cout << setw(45) << "Do you have fines ?" << endl;
		string fines;
		cout << setw(45) << "(yes or no)" << endl;
		cout << setw(45) << "Answer : ";
		cin >> fines;
		if (fines == "yes" || fines == "Yes")
			prisence_of_fines = true;
		else
			prisence_of_fines = false;
		cout << "////////////////////////////////////////////////////////////////////////////////////////" << endl;
	}

	void output_driver()
	{
		cout << "////////////////////////////////////////////////////////////////////////////////////////" << endl;
		output_employee();
		cout << "////////////////////////////////////////////////////////////////////////////////////////" << endl;
		output_car();
		cout << "////////////////////////////////////////////////////////////////////////////////////////" << endl;
		SetConsoleTextAttribute(c, 13);
		cout << setw(45) << "Year started to be used : " << year_of_use << endl;
		cout << setw(46) << "You have fines?";
		cout << endl;
		if (prisence_of_fines)
			cout << setw(46) << "Yes" << endl;
		else
			cout << setw(46) << "No" << endl;
		cout << "////////////////////////////////////////////////////////////////////////////////////////" << endl;
	}

	void determining_driver()
	{
		if ((2021 - year_of_issue) > drivingexperience)
			cout << "The age of the car is greater than the experience of the driver" << endl;
		else
			if ((2021 - year_of_issue) < drivingexperience)
				cout << "The age of the car is less than the experience of the driver" << endl;
			else
				cout << "The age of the car is equal to the experience of the driver" << endl;
	}

};








int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 1);
	driver a;
	a.change_driver();
	system("cls");
	a.output_driver();
	SetConsoleTextAttribute(h, 1);
	a.determining_driver();




	_getch();
	return 0;
}