#include <iostream>
#include "point.hpp"

using namespace std;

class Line {
private:
	Point start;
	Point finish;
public:
	Line (Point start, Point finish) : start(start), finish(finish){
	}
	double lenght() const {
		return start.countDist(finish);
	}
	void display()const{
		start.display();
		finish.display();
		cout<<"Line lenght : "<<lenght()<<endl;
	}
};
int main(){
	Point p1;
	p1.setX(3);
	p1.setY(4);
	p1.display();
	Point p2(6,8);
	cout<<"Distance : "<<p1.countDist(p2)<<endl;
	(p1.sumPoints(p2)).display();//parantez için de return yakalıp başka method çağıralabilir fakat tek seferlik yakalama olur
	Line l1(p1,p2);
	l1.display();
	Line l2(Point(0,0),Point(8,10));
	l2.display();
	return 0;
}

