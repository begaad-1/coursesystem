#include "students.h"
#include <iostream>
#include "string"
using namespace std;
students::students()
{
	email = "non";
	username = "non";
	fullname = "non";
	ID = 0;
	password = 0;
}
void students::setemail(string a)
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

void students::setfullname(string full)
{
	fullname = username +" "+ full;
}

void students::getfullname()
{
	cout << fullname;
}

void students::setusername(string user)
{
	username = user;
}

void students::getusername()
{
	cout << username << endl;
}

void students::setID(int id)
{
	ID = id;
}

void students::getID()
{
	cout << ID << endl;
}

void students::setpassword(int pass)
{
	password = pass;
}

void students::getpassword()
{
	cout << password;
}
 
void students::display()
{
	cout << "your username is : " << username << endl;
	cout << "your fullname is : " << fullname << endl;
	cout << "your email is : " << email << endl;
	cout << "your id is : " << ID << endl;
	cout << "your password is : " << password << endl;
}

void students::getemail()
{

	cout<<email<<endl;
}
