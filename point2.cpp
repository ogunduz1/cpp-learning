#include <iostream>

using namespace std;

class Nokta{
public:
	int x,y;
	void addValue(int,int);
	void display();
	bool IsOrigin();
};
void Nokta::addValue(int _x, int _y){
	x=_x;
	y=_y;
}
void Nokta::display(){
	cout<<x<<" , "<<y<<endl;
}
bool Nokta::IsOrigin(){
	return x==0&&y==0;
}

int main(){
	Nokta n1;
	Nokta n2;
	Nokta* n3;
	Nokta* n4;
	n4=new Nokta();
	n3=&n2;
	Nokta array[10];
	Nokta* pArray;
	pArray=new Nokta[10];
	n1.addValue(4,6);
	n2.addValue(3,7);
	//cout<<n1.x<<" , "<<n1.y<<endl;
	n1.display();
	//n2.display();
	cout<<"Is it on origin? 0 No 1 Yes : "<<n1.IsOrigin()<<endl;
	cout<<"Is it on origin? 0 No 1 Yes : "<<n1.IsOrigin()<<endl;
	n3->display();
	n4->addValue(55,90);
	n4->display();
	for(int i=0;i<10;i++){
		array[i].addValue(i*2,i*2);
		//pArray[i]->addValue(i*3,i*3); bu yanlış 
		pArray[i].addValue(i*3,i*3);//alternatif olarak=> (pArray+sizeof(Nokta)+1)->addValue  
		array[i].display();
		pArray[i].display();
	}
	return 0;
}

