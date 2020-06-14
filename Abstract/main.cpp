//Abstract class 
//?Abstract classlardan nesne yaratılmaz?
//?Abstract classların methoları subclasslarda override edilmek zorundadır, aksi halde hata olur
#include <iostream>
#define PI 3.1415 //?ISO +11 e göre const tanımlama formatı?
using namespace std;

class Shape{
protected:
	double area, perimeter;
public:
	virtual void whatAmI()=0;//soyutlaştırdık
	/*virtual void whatAmI(){
		cout<<"I am a shape!"<<endl;
	}*/
	virtual void countArea()=0;//pure method
	virtual void countPerimeter()=0;//pure method
	virtual double getArea()const=0;
	virtual double getPerimeter()const=0;
	virtual void unneccessary()=0;
};
class Rectangle:public Shape{
protected:
	double height,width;
public:
	Rectangle(double height, double width):height(height),width(width){}
	void whatAmI(){
		cout<<"I am a Rectangle!"<<endl;
	}
	void countArea(){
		area=height*width;
	}
	void countPerimeter(){
		perimeter=2*(width+height);
	}
	double getArea()const{
		return this->area;
	}
	double getPerimeter()const{
		return this->perimeter;
	}
	void unneccessary(){}
};
class Circle:public Shape{
private:
	double radius;	

public:
	Circle(double radius):radius(radius){}
	void whatAmI(){
		cout<<"I am a Circle!"<<endl;
	}
	void countArea(){
		area=PI*radius*radius;
	}
	void countPerimeter(){
		perimeter=2*PI*radius;
	}
	double getArea()const{
		return this->area;
	}
	double getPerimeter()const{
		return this->perimeter;
	}
	void unneccessary(){}
};
class Square : public Rectangle{
public:
	Square(double edge):Rectangle(edge,edge){}	
	void whatAmI(){
		cout<<"I am a Square!"<<endl;
	}
};
int main(){
	//<introduction>
	/*Shape* dizi[3];
	dizi[0]=new Shape();
	dizi[1]=new Rectangle();
	dizi[2]=new Circle();
	for(int i=0;i<3;i++)
		dizi[i]->whatAmI();*/
	//<end/>
	//<abstact class>
	//!virtual void whatAmI soyutlaştır!
	Shape* dizi[3];
	dizi[0]=new Rectangle(3,4);
	dizi[1]=new Circle(5);
	dizi[2]=new Square(4);
	for(int i=0;i<3;i++){
		dizi[i]->whatAmI();
		dizi[i]->countArea();
		dizi[i]->countPerimeter();
		cout<<"Area : "<<dizi[i]->getArea()<<endl;
		cout<<"Perimeter : "<<dizi[i]->getPerimeter()<<endl;
		cout<<endl;
	}
	return 0;
}

