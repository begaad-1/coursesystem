#pragma once
#include <iostream>
#include "string"
using namespace std;
class doctors
{


	
	public:
		int ID;
		string username;
		int password;
		string fullname;
		string email;

		doctors();
		void setemail(string a);
		void getemail();
		void setfullname(string full);
		void getfullname();
		void setusername(string user);
		void getusername();
		void setID(int id);
		void getID();
		void setpassword(int pass);
		void getpassword();

		void display();


	


};

