#ifndef CONTACTLIST_H
#define CONTACTLIST_H
#include <string>
#include <iostream>
using namespace std;

struct contact 
{
	std::string name;
	std::string phone;
	contact* next;
};

class contactlist
{
	private:
		contact* head;
	public:
		contactlist();
		~contactlist();
		void createcontact();
		void insertcontactlist(std::string, std::string);
		void insertanywhere(int);
		void deleteanywhere(int);
		void display();

}; 
#endif