//up and down type casting for classes which have inheritance relations
#include <iostream>

using namespace std;

class Human{
public:
	string name;
	Human(string name="default name"):name(name){}
};
class Sportman: public Human{
public:
	string team;
	Sportman(string name="default name",string team="default team"):Human(name),team(team){}
};
class Programmer : public Human{
public:
	string proLang;
	Programmer(string name="default name",string proLang="default language"):Human(name),proLang(proLang){}
};
int main(){
	//<type casting >
	Human h1("ahmet");
	Sportman s1("muslera","gsaray");
	Programmer p1("özgür","c++");
	cout<<h1.name<<endl;
	cout<<s1.name<<"  "<<s1.team<<endl;
	cout<<p1.name<<"  "<<p1.proLang<<endl;
	//<up casting>
	cout<<"\n<Up Casting>\n\n";
	Human* dizi[3];
	dizi[0]=&h1;
	dizi[1]=&s1;
	dizi[2]=&p1;
	for(int i=0;i<3;i++)
		cout<<dizi[i]->name<<endl;
	//<up casting/>
	//<down casting>
	cout<<"\n<Down Casting>\n\n";
	Sportman* s2=(Sportman*)dizi[1];
	cout<<s2->team<<endl;
	Programmer* p2=(Programmer*)dizi[2];
	cout<<p2->proLang<<endl;
	//hata senaryosu
	Sportman* error=(Sportman*)dizi[2];
	cout<<error->name<<"\t"<<error->team<<endl;
	cout<<"size of Human* :"<<sizeof(Human*)<<endl;
	cout<<"size of Sportman* :"<<sizeof(Sportman*)<<endl;
	cout<<"size of Programmer* :"<<sizeof(Programmer*)<<endl;
	//<down casting/>
	//</>
	return 0;
}
