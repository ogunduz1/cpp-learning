#ifndef _HUMAN_
#define _HUMAN_
#include "human.hpp"
	Human::Human(string id="",string name="",string surname=""):id(id),name(name),surname(surname){}
	void Human::setId(string id){
		this->id=id;
	}
	void Human::setName(string name){
		this->name=name;
	}
	void Human::setSurname(string surname){
		this->surname=surname;
	}
	string Human::getId(){
		return this->id;
	}
	string Human::getName(){
		return this->name;
	}
	string Human::getSurname(){
		return this->surname;
	}
	void Human::display(){
		cout<<"person infos : id : "<<this->id<<" name : "<<this->name<<" surname : "<<this->surname<<endl;
	}
	Student::Student(
					string schoolId="", string id="", string name="", string surname=""):
					schoolId(schoolId), Human::Human(id,name,surname){}
	void Student::setSchoolId(string schoolId){
		this->schoolId=schoolId;
	}
	string Student::getSchoolId(){
		return this->schoolId;
	}
	void Student::display(){//overriding
		cout<<"Student infos : School Id : "<<schoolId<<" id : "<<this->id
			<<" name : "<<this->name<<" surname : "<<this->surname<<endl;
	}
	
#endif
