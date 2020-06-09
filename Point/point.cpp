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
void Point::display(){
	std::cout<<"Points values : "<<this->x<<" , "<<this->y<<std::endl;
}
#endif

