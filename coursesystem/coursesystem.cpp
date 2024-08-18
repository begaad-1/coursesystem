using namespace std;
#include <iostream>
#include <cstdlib>
#include <string>
#include "students.h"
#include "doctors.h"
#include "course.h"

doctors x;
students s;
course c;

int systemintegration() {
	int sysintegration;

	cout << "please choose what do you want to do\n" << endl;

		cout << "1- login" << endl;
		cout << "2- sign up" << endl;
		cout << "3- shutdown system\n" << endl;
		cin >> sysintegration;  //choosing wither to login or signup
		cout << endl;
	

	return sysintegration;

}



void doctorinterface() {
	int doctorintegration=0;
	cout << "----------------------------welcome---------------------------\n\n";
	s.display();
	cout << endl << endl << endl;
	cout << "choose what to do next\n\n";
		cout << "1- list courses\n2- create course\n3- view course\n4- log out" << endl;
		cin >> doctorintegration;
	

	
	
}

void studentinterface() {
	int studentintegration = 0;
	cout << "----------------------------welcome---------------------------\n\n";
	x.display();
	cout << endl << endl << endl;
	cout << "choose what to do next\n\n";
		cout << "5- register in course \n6- list my courses\n7- view a course\n8- grades report\n9- log out" << endl;
		cin >> studentintegration;
	
	switch (studentintegration) {
	case 5: {
		int main();
	}
	}
}

void signdoctoraccount() {
	string email;
	string user;
	string lastname;
	int id;
	int pass;
	cout << "------------------------------welcome---------------------------\n\n";
	cout << "to create a student account we will need you to insert the following details\n" << endl;

	
	cout << "first write a valid email\n\n";
	while (s.email == "non") {
		cin >> email;
		s.setemail(email);
		if (s.email == "non") {
			cout << "the email you just entered is not a valid email please try again\n\n";
			s.setemail(email);

		}
	}
	cout << "\n\nwrite the username\n\n";
	cin >> user;
	s.setusername(user);

	cout << "\n\nwrite your last name\n\n";
	cin >> lastname;
	s.setfullname(lastname);

	cout << "\n\nwrite your id\n\n";
	cin >> id;
	s.setID(id);

	cout << "\n\nwrite your password\n\n";
	cin >> pass;
	s.setpassword(pass);
	cout << endl;
	doctorinterface();

}

void signstudentaccount() {
	string email;
	string user;
	string lastname;
	int id;
	int pass;
	cout << "------------------------------welcome---------------------------\n\n";
	cout<<"to create a student account we will need you to insert the following details\n" << endl;
	cout << "first write a valid email\n\n";
	while (x.email == "non") {
		cin >> email;
		x.setemail(email);
		if (x.email == "non") {
			cout << "the email you just entered is not a valid email please try again\n\n";
			x.setemail(email);

		}
	}
    cout << "\n\nwrite the username\n\n";
	cin >> user;
	x.setusername(user);

	cout << "\n\nwrite your last name\n\n";
	cin >> lastname;
    x.setfullname(lastname);
	
	cout << "\n\nwrite your id\n\n";
	cin >> id;
	x.setID(id);
	
	cout << "\n\nwrite your password\n\n";
	cin >> pass;
	x.setpassword(pass);
	cout << endl;

	studentinterface();

}

void createcourse() {
	string name;
	string code;
	cout << "type the material for which you want to make the course (example: math)\n\n";
	cin >> name;
	cout << "\ntype the code for the course (example: C12)\n\n";
	cin >> code;
	c.setcode(code);
	c.setname(name);
	doctorinterface();

}

void viewcourse() {
	cout << "the material of the course is : " << c.name << endl;
	cout << "the code of the course is : " << c.code << endl;
	doctorinterface();
}

void listcourses() {
	
	cout << "under devoloping" << endl;
	doctorinterface();
}

void signup() {
	int systemintegration=0;
	cout << "choose which account would you want to create\n" << endl;
		cout << "1- doctor account\n2- student account\n\n";
		cin >> systemintegration;

	if (systemintegration == 1)
		signdoctoraccount();
	else if (systemintegration == 2)
		signstudentaccount();
	
}

void login() {
	int password;
	string email;
	cout << "write the email\n" << endl;
	cin >> email;
	cout << "write the password\n" << endl;
	cin >> password;
	if (email == s.email && password == s.password) {
		doctorinterface();
	}
	else if (email == x.email && password == x.password) {
		studentinterface();
	}
	else
	{ cout << "account not found" << endl;
	systemintegration();
	}

}





int main()
{
	int choice;
	for (int x = 1; x > 0; x) {


		cout << "welcome to the courses system" << endl;
		cout << "-----------------------------" << endl;
		cout << "*****************************" << endl; //the start
		cout << "-----------------------------" << endl;
		cout << "\n\n\n";


		int sysintegration = systemintegration();
		if (sysintegration == 1) {
			login();
		
		}
		else if (sysintegration == 2) {
			signup();
			
		}
		else break;

	}
}