#include <iostream>

using namespace std;

//override != overloading

class Ibase{
public:
	int data[10];
	int size;

	Ibase():size(0){}
	void addValue(int value){
		data[size]=value;
		size++;
	}
	void display()const{
		for (int i=0;i<size;i++)
			cout<<data[i]<<"\t";
		cout<<endl;
	}
};
class Dbase : public Ibase {
public:
	double data[10];
	Dbase():Ibase::Ibase(){}
	void addValue(double value){
		data[size]=value;
		size++;
	}
	void display()const{
		for (int i=0;i<size;i++)
			cout<<data[i]<<"\t";
		cout<<endl;
	}
};
//kalıtımda base classdan o cinsde pointer derived class için tanımlanabilir.
int main () {
	Ibase b1;
	b1.display();
	b1.addValue(1);
	b1.display();
	b1.addValue(2);
	b1.display();
	Dbase d1;
	d1.display();
	d1.addValue(1.2);
	d1.display();
	d1.addValue(3.4);
	d1.display();	
	return 0;
}
