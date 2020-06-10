#ifndef _COLUMN_H_
#define _COLUMN_H_
class Column{
private:
	int* data;
	int size;

	void incSize (int);
	void decSize (int);
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
	Column& operator = (const Column&);//class da pointer eleman varsa = overload zorunlu
//	int& Column operator [] (int);
	void operator () () const;
	void operator () (int) const;
	void operator () (int,int);
	void operator ++ (int);//postfix
	void operator ++ ();//prefix
	void operator -- (int);
	void operator -- ();
};
#include "column.cpp"
#endif

