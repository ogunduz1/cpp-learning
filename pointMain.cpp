#include <iostream>
#include "pointSource.hpp"
using namespace std;

int Nokta::i=0;//static değişken 
int Nokta::j=0;
int main(){
	Nokta n1(1,1,1071);
	const Nokta n2(99,99,99);//sabit nesne, bu şekilde tüm özellikler sabittir.
	//sabit nesnelerin özellikleri ve methodları nesne dışına çağırılamaz
	cout<<"ara kontrol 1 yapıldı\n";	
	Nokta n3(n1);
	cout<<"static i variable : "<<Nokta::i<<endl; 
	cout<<"static j variable : "<<n3.getJ()<<endl;
	{//yeni scope
		Nokta n4;
		cout<<"static i variable : "<<Nokta::i<<endl; 
		cout<<"static j variable : "<<n3.getJ()<<endl;
	}
	cout<<"static i variable : "<<Nokta::i<<endl; 
	cout<<"static j variable : "<<n3.getJ()<<endl;
	return 0;
}
