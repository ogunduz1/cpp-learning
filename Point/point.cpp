#ifndef _POINT_
#define _POINT_
#include "point.hpp"
Point::Point(){
	x=0;
	y=0;
}
Point::Point(int x,int y){
	this->x=x;
	this->y=y;
}
void Point::setX(int x){
	this->x=x;
}
void Point::setY(int y){
	this->y=y;
}
int Point::getX(){
	return this->x;
}
int Point::getY(){
	return this->y;
}
void Point::display()const{
	std::cout<<"Points values : "<<this->x<<" , "<<this->y<<std::endl;
}
double Point::countDist(const Point& p) const {
	int dx2=pow(p.x-x,2);
	int dy2=pow(p.y-y,2);
	return sqrt(dx2+dy2);
}
Point Point::sumPoints(const Point& p) const {
	int x=this->x+p.x;
	int y=this->y+p.y;
	return Point(x,y);
}
#endif

