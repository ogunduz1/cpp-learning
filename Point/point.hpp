#ifndef _POINT_H_
#define _POINT_H_
class Point{
private:
	int x,y;
public:
	Point();
	Point(int,int);
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	void display();
};
#include "point.cpp"
#endif


