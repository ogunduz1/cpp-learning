//bu program çoklu kalıtım çalışması için yapıldı
//this program was made to study multiple inheritance
#include <iostream>

using namespace std;

class Printer{
public:
	string marka;
	Printer(string m1):marka(m1){
		cout<<"this is a printer  : "<<marka<<endl;
	}
};
class Scanner{
public:
	string marka;
	Scanner(string m1):marka(m1){
		cout<<"this is a scanner  : "<<marka<<endl;
	}
};
class Compact:public Printer, public Scanner {
public:
	Compact(string m1,string m2):Printer(m1),Scanner(m2){
		cout<<"this is a compact device  :"<<Printer::marka<<"  "<<Scanner::marka<<endl;
	}
};
int main(){
	Printer p1("dell");
	Scanner s1("hp");
	cout<<endl<<endl;
	Compact c1("toshiba","samsung");
	return 0;
}

