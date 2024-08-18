#include "doctors.h"
#include <iostream>
#include "string"
using namespace std;
doctors::doctors()
{
	email = "non";
	username = "non";
	fullname = "non";
	ID = 0;
	password = 0;
}

void doctors::setemail(string a)
{
	bool n = false;
	int x = a.length();

	for (int z = 0; z < x; z++) {
		if (int(a[z]) == 64) {
			n = true;
		}
	}
	if (n == true) {
		email = a;
	}


}

void doctors::setfullname(string full)
{
	fullname = username + " " + full;
}

void doctors::getfullname()
{
	cout << fullname;
}

void doctors::setusername(string user)
{
	username = user;
}

void doctors::getusername()
{
	cout << username << endl;
}

void doctors::setID(int id)
{
	ID = id;
}

void doctors::getID()
{
	cout << ID << endl;
}

void doctors::setpassword(int pass)
{
	password = pass;
}

void doctors::getpassword()
{
	cout << password;
}

void doctors::display()
{
	cout << "your username is : " << username << endl;
	cout << "your fullname is : " << fullname << endl;
	cout << "your email is : " << email << endl;
	cout << "your id is : " << ID << endl;
	cout << "your password is : " << password << endl;
}

void doctors::getemail()
{

	cout << email << endl;
}
