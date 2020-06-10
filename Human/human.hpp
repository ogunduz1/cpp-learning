#ifndef _HUMAN_H_
#define _HUMAN_H_
using namespace std;
class Human{
protected:
	string id;
	string name;
	string surname;
public:
	Human(string ,string,string);
	void setId(string);
	void setName(string);
	void setSurname(string);
	string getId();
	string getName();
	string getSurname();	
	void display();

};
class Student : public Human{
private:
	string schoolId;
public:
	Student(string,string,string,string);
	void setSchoolId(string schoolId);
	string getSchoolId();
	void display();//overriding
};	
#include "human.cpp"
#endif
