#include <iostream>

using namespace std;

class Nokta{
private:
	int x,y;
//protected:kalıtımda kullanılır, dışarıya kapalıdır
public:
	const int t;//sabit değerler kurucular diğer degerleri atamadan önce atanmalı
	int* z;
	Nokta();
	Nokta(int,int,int);
	Nokta(const Nokta&);//kopyalama kurucu: sabit ve obje refenransı olmak zorunda
	~Nokta();//destructor
//destructorlar, class özelliklerinden biri pointer ise, objenin yaşam döngüsü bittiğinde pointerin kullandığı bellek alanını
//sisteme iade edilmesi ve memory leak oluşmaması için kullanılır.
//bellek sisteme iade edilmezse program kapatılana kadar o bellek alanı sistemden ayrı (leak) olarak kalır
	int getX() const;//methodda const tanımlanırsa bu objenin değişkenlerinin değişmeyeceği anlamına gelir.
	int getY() const;
	void setX(int);
	void setY(int);
	void display();
	bool IsOrigin();
};
Nokta::Nokta() : t(0){//diğerlerine değer atamadan önce const olan değişkene atar
	cout<<"Parametresiz kurucu\n";
	x=0;
	y=0;
	z=new int(5);
}
Nokta::Nokta(int x, int y,int t) : t(t){//this e gerek yok, parametre olan t yi tanımlar
	cout<<"Prametreli kurucu\n";
	this->x=x;
	this->y=y;
	z=new int(6);
}
/*Normalde komyalama kurucusu otamatik oluşur, fakat class özelliklerinde pointer varsa, ona yeni bellek alanı tamımlamaz
 * bu nedenle pointer özellik kullanılırsa kopyalayıcı sunu istenirse manuel olarak tanımlanmalı
 * yoksa kopyaların pointer özellikleri olan değişkenleri aynı bellek adresini paylaşacağı için biri üzerinde işlem
 * yapılırsa öbürü de etkilenir*/
Nokta::Nokta(const Nokta& n) : t(n.t){
	x=n.x;
	y=n.y;
	z=new int(*n.z);
	cout<<"kopyalama kurucusu çağırıldı\n";
}
Nokta::~Nokta(){//destructor parametresiz ve tek olmak zorunda
	cout<<"yıkıcı çalıştı\n";
	delete z;
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

int main(){
	Nokta n1(1,1,1071);
	const Nokta n2(99,99,99);//sabit nesne, bu şekilde tüm özellikler sabittir.
	//sabit nesnelerin özellikleri ve methodları nesne dışına çağırılamaz
	cout<<"ara kontrol 1 yapıldı\n";	
	Nokta n3(n1);
	return 0;
}
