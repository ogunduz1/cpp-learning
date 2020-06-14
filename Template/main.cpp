//template example
#include <iostream>

using namespace std;

template <typename T>
T increase (T value){
	return value+1;
}
template <typename T>
void change(T &x, T &y){
	T temp=x;
	x=y;
	y=temp;
}
template <class T>
class MyClass {
public:
	T data;
	MyClass(T data):data(data){}
};
int main(){
	//<template function>
	/*cout<<increase(1.7)<<endl;
	cout<<increase(3)<<endl;
	int a=5;
	int b=10;
	char p='p';
	char r='r';
	cout<<"a : "<<a<<" b : "<<b<<endl;
	change(a,b);
	cout<<"a : "<<a<<" b : "<<b<<endl;
	cout<<"p : "<<p<<" r : "<<r<<endl;
	change(p,r);
	cout<<"p : "<<p<<" r : "<<r<<endl;*/
	//<end/>
	//<template class>
	MyClass<int> b(10);
	cout<<b.data<<endl;
	MyClass<char> c('x');
	cout<<c.data<<endl;
	MyClass<float> f(8.7);
	cout<<f.data<<endl;
	//<end/>
	return 0;
}
