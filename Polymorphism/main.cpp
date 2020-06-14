//Polymorphism study
#include <iostream>

using namespace std;

class Cat{
public:
	//void voice(){
	virtual void voice(){//?Up Type castingde override etme?
		cout<<"miyav"<<endl;
	}
};
class Lion : public Cat{
public:
	void voice(){//overriding
		cout<<"roar"<<endl;
	}
};
int main(){
	//<defining>
	Cat c1;
	Lion l1;
	c1.voice();
	l1.voice();
	//<Overriding error>
	//!Taban methodunu virtual yapma! hatayı gör!
	cout<<"\nType Casting\n\n";
	Cat* dizi[2];
	dizi[0]=&c1;
	dizi[1]=&l1;
	//<Overriding solution>
	//!Taban methodunu virtual yap!
	dizi[0]->voice();
	dizi[1]->voice();
	
	return 0;
}
