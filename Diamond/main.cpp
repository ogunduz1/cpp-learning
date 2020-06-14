//Çoklu kalıtımda Diamond problemi (tekrarlı kalıtım alma)
//Diamond problem in multiple inheritance (repetitive inheriting)
#include <iostream>


using namespace std;

class A{
public:
	int x;
	A(int x=1):x(x){cout<<"Class A"<<endl;}
};
//class B : public A{
class B : virtual public A{ //sanal kalıtım
public:
	B(){cout<<"Class B"<<endl;}
};
//class C:public A{
class C : virtual public A{ // ? sanal kalıtımda bir kez tekrarlar ? 	
public:
	C(){cout<<"Class C"<<endl;}
};
class D:public B,public C{
public:
	D(){cout<<"Class D"<<endl;}
};

int main(){
	//<Diamond problemi ve çözümü>
	//(1)!B ve C class larını normal inherit yap!
	//(2)!B ve C class larını virtual inherit yap!
	A a1;
	cout<<endl;
	B b1;
	cout<<endl;
	C c1;
	cout<<endl;
	D d1;
	cout<<d1.x<<endl;
	d1.x=1453;
	cout<<d1.x<<endl;
	//</>
	return 0;
}

