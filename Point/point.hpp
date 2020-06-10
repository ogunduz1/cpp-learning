#ifndef _POINT_H_
#define _POINT_H_
#include <math.h>
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
	void display()const;
	double countDist(const Point&)const;
	Point sumPoints(const Point&)const;
};
#include "point.cpp"
#endif


