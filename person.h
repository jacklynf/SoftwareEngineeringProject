#ifndef PERSON_H
#define PERSON_H

#include "date.h"
#include "contact.h"
//#include "network.h"
#include <fstream>
#include <vector>

class Person{
    friend class Network;

private:
	string f_name;
	string l_name;
	Date *birthdate;
    Email *email;
    Phone *phone;
    // the following to attributes are used in the linked list.
    Person* next;
    Person* prev;

public: 
    Person();
    ~Person();
    Person(string filename);
    Person(string f_name, string l_name, string bdate);
    Person(string f_name, string l_name, string bdate, string email, string phone);
	void print_person();
    //void write_person(File* filename);
	void set_person();
	void set_person(string filename);
    bool operator==(const Person& rhs);
    bool operator!=(const Person& rhs);    
    vector<Person*> myfriends;
    void makeFriend(Person* newFriend);
};


#endif