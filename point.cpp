#include <iostream>

using namespace std;

class Nokta{
public:
	int x,y;
	void addValue(int _x, int _y){
		x=_x;
		y=_y;
	}
	void display(){
		cout<<x<<" , "<<y<<endl;
	}
	bool IsOrigin(){
		if(x==0&&y==0)
			return true;
		else 
			return false;
	}

};

int main(){
	Nokta n1;
	Nokta n2;
	//n1.x=0;
	//n1.y=5;
	n1.addValue(4,6);
	n2.addValue(3,7);
	//cout<<n1.x<<" , "<<n1.y<<endl;
	n1.display();
	n2.display();
	cout<<"Is it on origin? 0 No 1 Yes : "<<n1.IsOrigin()<<endl;
	cout<<"Is it on origin? 0 No 1 Yes : "<<n2.IsOrigin()<<endl;
	return 0;
}

