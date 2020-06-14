//Türemiş sınıftan taban sınıfın kurucu methodunu çağırma
#include <iostream>

using namespace std;

class Base {
public:
	int* ptr;
	double* fptr;
	Base(int i=0){
		cout<<"Integer kurucu çağırıldı \n";
		ptr=new int(i);
	}
	Base(double i){
		cout<<"Double kurucu çağırıldı\n";
		fptr=new double(i);
	}
	Base(const Base& b){
		cout<<"Base Copy Cons. çağırıldı\n";
		ptr=new int(*b.ptr);
	}
/*	~Base(){
		cout<<"Base yıkıcı çağırıldı\n";
		delete ptr;
	}*/
	Base& operator = (const Base& b){
		cout<<"Base operator =\n";
		delete ptr;
		ptr=new int(*b.ptr);
		return *this;
	}
};
class Derieved: public Base{
public:
	int* ptr2;//aynı isim verilseydi override olacaktı
	Derieved(int i =0, int y=0):Base(y)/*Base(1.3)*/{//base constructor çağırma/Comment içindeki alan double çağırmak için
		cout<<"Derieved kurucu çağırıldı\n";
		ptr2=new int(i);
	}
	Derieved(const Derieved& d):Base(d){
		cout<<"Derieved Copy cons. çağırıldı\n";
		ptr2=new int(*d.ptr2);
	}
//	~Derieved(){//?:~Base() olarak tabana deconstructora ulaşmaya gerek yok, otomatik olarak gidiyor?
//		cout<<"Derieved yıkıcı çağırıldı\n";
//		//Base::~Base();
//		delete ptr2;
//	}
	Derieved& operator = (const Derieved& d){
		Base::operator=(d);//taban operator çağırma 
		cout<<"Derieved operator =\n";
		delete ptr2;
		ptr2=new int(*d.ptr2);
		return *this;
	}
};
int main(){
	//Base b(1923);
	//cout<<b.ptr<<endl;
	//cout<<*b.ptr<<endl;
	//Base b2=b;
	//cout<<b2.ptr<<endl;
	//cout<<*b2.ptr<<endl;
	//<Destructor kullanmama örneği başlangıç>
	//!destructorları commente al!
	/*int *p1,*p2;
	{
	Derieved d(1453,1071);
	p1=d.ptr;
	p2=d.ptr2;
	cout<<*d.ptr2<<endl;
	cout<<d.ptr2<<endl;
	cout<<*d.ptr<<endl;
	cout<<d.ptr<<endl;
	}
	cout<<"free pointer area\n";
	cout<<p1<<endl;
	cout<<*p1<<endl;
	cout<<p2<<endl;
	cout<<*p2<<endl;*/
	//<Destructor kullanmama örneği bitiş>
	//!Destructorları uncomment yap!
	//<Copy Constructor örneği başlangıç?
	/*Derieved d(1453,1071);
	p1=d.ptr;
	p2=d.ptr2;
	cout<<*d.ptr2<<endl;
	cout<<d.ptr2<<endl;
	cout<<*d.ptr<<endl;
	cout<<d.ptr<<endl;
	Derieved d2;
	d2=d;
	cout<<*d2.ptr2<<endl;
	cout<<d2.ptr2<<endl;
	cout<<*d2.ptr<<endl;
	cout<<d2.ptr<<endl;*/
	//<Copy constructor örneği bitiş>
	//<Taban Atama operatorü(overloaded) çağırma örneği başlangıç>
	/*Derieved d(1923,1071);
	cout<<*d.ptr2<<endl;
	cout<<d.ptr2<<endl;
	cout<<*d.ptr<<endl;
	cout<<d.ptr<<endl;
	Derieved d2(1920,1876);
	cout<<*d2.ptr2<<endl;
	cout<<d2.ptr2<<endl;
	cout<<*d2.ptr<<endl;
	cout<<d2.ptr<<endl;
	d2=d;
	cout<<*d2.ptr2<<endl;
	cout<<d2.ptr2<<endl;
	cout<<*d2.ptr<<endl;
	cout<<d2.ptr<<endl;*/
	//<Taban Atama operatorü(overloaded) çağırma örneği bitiş>	
	return 0;
}


