#ifndef _COLUMN_
#define _COLUMN_
#include "column.hpp"
	Column::Column(int size=1) : size(size) {
		data = new int[size];//dizi oluşturuyoruz
		std::cout<<size<<" sized column created! \n";
	}
	Column::Column (const Column& c){
		this->size=c.size;
		data=new int[size];
		for(int i=0;i<size;i++)
			data[i]=c.data[i];
		std::cout<<"Copy Constructor runned \n";
	}
	Column::~Column(){
		delete[] data;//array cinsinden olunca bu şekilde siliniyor
		std::cout<<"Destructor called! \n";
	}
	void Column::setValue(int index, int value){
		if(index<this->size)
			data[index]=value;
	}
	int Column::getSize(){
		return size;
	}
	void Column::setSize(int size) {
		this->size = size;
	}
	void Column::display(){
		for(int i=0;i<this->size;i++)
			std::cout<<i<<". eleman : "<<data[i]<<std::endl;
	}
	const int* Column::getData()const{
		return data;
	}
	Column Column::sum(const Column& c){
		if(this->size==c.size){
			Column temp;
			temp.size=this->size;
			for(int i=0;i<temp.size;i++)
				temp.data[i]=this->data[i]+c.data[i];
			return temp;
		}
	}
	Column Column::product(const Column& c) {
		if(this->size=c.size){
			Column temp;
			temp.size=this->size;
			for(int i=0;i<temp.size;i++)
				temp.data[i]=this->data[i]*c.data[i];
			return temp;	
		}
	}
	double Column::avg()const{
		int sum =0;//bu önemli yoksa default saçma bir değer atıp hesabı değiştirir
		for(int i=0;i<this->size;i++)
			sum+=this->data[i];
		return (double)sum/this->size;
	}
	Column Column::operator + (const Column& c)const{
		if(this->size==c.size){
			Column temp;
			temp.size=this->size;
			for(int i=0;i<temp.size;i++)
				temp.data[i]=this->data[i]+c.data[i];
			return temp;
		}
	}
	Column Column::operator + (const int x)const{
		Column temp;
		temp.size=this->size;
		for(int i=0;i<this->size;i++)
			temp.data[i]=this->data[i]+x;
		return temp;
	}
#endif
