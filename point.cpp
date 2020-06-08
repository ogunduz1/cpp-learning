#include <iostream>

using namespace std;

class Nokta{
private:
	int x,y;

//protected:kalıtımda kullanılır, dışarıya kapalıdır
public:
	//Nokta();
	Nokta(int,int);
	int getX();
	int getY();
	void setX(int);
	void setY(int);
	void display();
	bool IsOrigin();
};
/*Nokta::Nokta(){//default cons. parametre yok/aşağıdaki seçili parametreli cons. bunun işini de üstlendi
	x=0;
	y=0;
}*/
Nokta::Nokta(int x=0, int y=0){//eğer parametre girilmezse default değeri verir, default cons gerek kalmadı 
	this->x=x;
	this->y=y;
}
int Nokta::getX(){
	return x;
}
int Nokta::getY(){
	return y;
}
void Nokta::setX(int x){
	this->x=x;
}
void Nokta::setY(int y){
	this->y=y;
}
void Nokta::display(){
	cout<<x<<" , "<<y<<endl;
}
bool Nokta::IsOrigin(){
	return x==0&&y==0;
}

int main(){
	Nokta n1;
	Nokta n2(3,13);//direk değişkenden sonra parantez ac parametre gir
	Nokta n3(99);//tek parametre girilirse önce soldaki parametreye atar, diğeri default olur/ (,99)şeklinde kullanım yok
	cout<<n1.getX()<<" , ";
	cout<<n1.getY()<<endl;
	cout<<n2.getX()<<" , ";
	cout<<n2.getY()<<endl;
	cout<<n3.getX()<<" , ";
	cout<<n3.getY()<<endl;
	return 0;
}
