#ifndef _POINT_
#define _POINT_
#include "pointSource.hpp"

using namespace std;

Nokta::Nokta() : t(0){//diğerlerine değer atamadan önce const olan değişkene atar
	cout<<"Parametresiz kurucu\n";
	x=0;
	y=0;
	z=new int(5);
	i++;
	j++;
}
Nokta::Nokta(int x, int y,int t) : t(t){//this e gerek yok, parametre olan t yi tanımlar
	cout<<"Prametreli kurucu\n";
	this->x=x;
	this->y=y;
	z=new int(6);
	i++;
	j++;
}
Nokta::Nokta(const Nokta& n) : t(n.t){
	x=n.x;
	y=n.y;
	z=new int(*n.z);
	cout<<"kopyalama kurucusu çağırıldı\n";
	i++;
	j++;
}
Nokta::~Nokta(){//destructor parametresiz ve tek olmak zorunda
	cout<<"yıkıcı çalıştı\n";
	delete z;
	i--;
	j--;
}
//class içinde static yazıldı, clasın dışında static keywordu yazılmayacak, hata veriyor.
void Nokta::setJ(int _j){//static methodlarda ve variablerda this pointeri kullanılmıyor
	j=_j;
}
int Nokta::getJ() {
	return j;
}
int Nokta::getX() const{
	int _x= x*2;//bunda hata vermez çünkü _x değişkeni sınıfa ait değil, const sınıf değişkenleri için geçerli
	return x;
}
int Nokta::getY() const{
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
#endif
