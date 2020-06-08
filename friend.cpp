#include <iostream>

using namespace std;

class B;//class A da kullanılacak bir fonksiyon olduğu için B nin prototipi A dan önce tanımlı olmalı
class A{
private:
	int x;
public:
	int getX();
	void setX(int);
	friend void foo(A&);//a tipinde bir referans alıyor
	void setY(B&);
};
class B{
private:
	int y;
public:
	int getY();
	void setY(int);
	friend class A;//friend senin içini görebilir, ama sen onu göremeyebilirsin/sen friend sandığına içini açarsın
};

int A::getX(){return x;}

void A::setX(int _x){x=_x;}

void foo(A&a){a.x=0;}

void A::setY(B&e){e.y=100;}

int B::getY(){return y;}

void B::setY(int _y){y=_y;}

int main() {
	A n;
	n.setX(5);
	cout<<n.getX()<<endl;
	foo(n);//burada fonk. tanımlanırken & kullaıldı, değer atarken kullanılmasına gerek kalmadı
	cout<<n.getX()<<endl;
	B n2;
	n2.setY(19);
	cout<<"B classı içinden tanımlama : "<<n2.getY()<<endl;
	n.setY(n2);
	cout<<"A classı içinden friend ile tanımlama : "<<n2.getY()<<endl;
	return 0;
}










