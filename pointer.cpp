//Bu program pointer variable ilişkisini ve referance-value dönüşümünü incelemek üzere yapıldı.
//This program was made to analyzing pointer-variable relation and referance-value conversion. 
#include <iostream>

using namespace std;

int main(){
	int var=1923;
	int* ptr=new int(1453);
	cout<<"Pointer type analyze\n";
	cout<<"using plain pointer; referance of memory section (ptr) : "<<ptr<<endl;
	cout<<"using * with pointer; value of pointed adress (*ptr): "<<*ptr<<endl;
	cout<<"using & and * together with pointer; full cycle (&*ptr): "<<&*ptr<<endl;
	cout<<"size of pointer : "<<sizeof(ptr)<<endl;
	cout<<"\n\nVariable type analyze\n";
	cout<<"using plain variable; value of variable (var): "<<var<<endl;
	cout<<"using & with Variable; referance of memory section (&var): "<<&var<<endl;
	cout<<"using * and & together with variable; full cycle (*&var): "<<*&var<<endl;
	cout<<"size of variable : "<<sizeof(var)<<endl;
	return 0;
}
