#include <iostream>

using namespace std;

class Nokta{
private:
	int x,y;

//protected:kalıtımda kullanılır, dışarıya kapalıdır
public:
	int getX();
	int getY();
	void setX(int);
	void setY(int);
	void display();
	bool IsOrigin();
};
int Nokta::getX(){
	return x;
}
int Nokta::getY(){
	return y;
}
void Nokta::setX(int _x){
	x=_x;
}
void Nokta::setY(int _y){
	y=_y;
}
void Nokta::display(){
	cout<<x<<" , "<<y<<endl;
}
bool Nokta::IsOrigin(){
	return x==0&&y==0;
}

int main(){
	Nokta n1;
	n1.setX(5);
	n1.setY(12);
	cout<<n1.getX()<<" , ";
	cout<<n1.getY()<<endl;
	return 0;
}
