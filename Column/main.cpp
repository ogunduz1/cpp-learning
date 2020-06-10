#include <iostream>
#include "column.hpp"
#include <time.h>
using namespace std;

int main(){
/*	Column c1(3);
	c1.setValue(0,9);
	c1.setValue(1,8);
	c1.setValue(2,7);
	c1.display();
	Column c2=c1;//copy constructor otomatik olarak çağırılacak
	c2.display();
	cout<<"adres of c1"<<c1.getData()<<endl;
	cout<<"adres of c2"<<c2.getData()<<endl;
	(c1.sum(c2)).display();	
	(c1.product(c2)).display();
	cout<<"Average of column: "<<c1.avg()<<endl;*/
	srand(time(NULL));
	/*Column c3(4);
	Column c4(4);
	for(int i=0;i<4;i++){
		c3.setValue(i,rand()%50);
		c4.setValue(i,rand()%50);
	}
	c3.display();
	c4.display();
	(c3+c4).display();
	(c3+10).display();
	Column c5(5);
	for(int i=0;i<4;i++){
		c5.setValue(i,rand()%50);
	}
	c5.display();
	Column c6;
	c6=c5;//overloaded = 
	c6.display();
	Column c7=c5;
	c7.display();
	c7=c6=c5;
	c5.display();
	c6.display();
	c7.display();*/
	Column c8(3);
	for(int i=0;i<4;i++){
		c8.setValue(i,rand()%50);
	}
	c8.display();
	cout<<"over loaded ()"<<endl;
	c8(2);
	c8();
	c8(3);
	c8(0,2);
	c8.display();
	cout<<"++ postfix\n";
	c8++;
	c8.display();
	cout<<"++ prefix \n";
	++c8;
	c8.display();
	cout<<"-- postfix\n";
	c8--;
	c8.display();
	cout<<"-- prefix\n";
	--c8;
	c8.display();
	return 0;
}

