#ifndef _COLUMN_H_
#define _COLUMN_H_
class Column{
private:
	int* data;
	int size;
public:
	Column(int);
	Column (const Column& c);
	~Column();
	void setValue(int , int );
	int getSize();
	void setSize(int ) ;
	void display();
	const int* getData()const;
	Column sum(const Column& );
	Column product(const Column& ) ;
	double avg()const;
	Column operator + (const Column&)const;
	Column operator + (const int)const;
};
#include "column.cpp"
#endif

