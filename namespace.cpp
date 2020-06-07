#include <iostream>

using namespace std;

namespace dev1 {//namespaceler scope tanımlamak için kullanılır içine fonks. ve varible atılır.
	int x=11;
	void doSomething(){
		int x =13;
		cout<<"somebody did something!\n";
	}
	//amac her bir projede calışan farklı dev.lerin kendi değişken ve fonk. larını 
	//kendi alanlarına tanımlayıp, böylece karışıklık olmasının önüne geçilmesi
}
namespace dev2 {
	int x=22;
	void doSomething() {
		int x=2;
		cout<<"it did it again and again ! \n";
	}
}
int main(){
	int x=77;
	cout<<"main : "<<x<<endl;
	cout<<"dev1 : "<<dev1::x<<endl;
	cout<<"dev2 : "<<dev2::x<<endl;
	dev1::doSomething();
	dev2::doSomething();
	return 0;
}

