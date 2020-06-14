//template class
#include <iostream>

using namespace std;

template<class T>
class V{
	T* data;
	int index;
public:
	V():index(0){
		data = new T[100];
	}
	void add(T t){
		data[index++]=t;
	}
	bool isEmpty()const{//const method const olmayan başka method kullanamaz
		return index==0;
	}
	void display()const{
		for(int i=0;i<index;i++)
			cout<<data[i]<<" ";
		if(!this->isEmpty())
			cout<<endl;
	}
	V<T> operator + (const V<T>& v){
		V<T> temp;
		for(int i=0;i<index;i++)
			temp.add(data[i]+v.data[i]);
		return temp;
	}
};
int main(){
	//<integer>
	/*V<int> v1,v2;
	v1.add(1);
	v1.add(3);
	v1.add(5);
	v1.display();
	v2.add(3);
	v2.add(10);
	v2.add(15);
	v2.display();
	(v1+v2).display();*/
	//<end/>
	//<string>
	V<string> v1,v2;
	v1.add("ali");
	v1.add("veli");
	v1.add("ayse");
	v1.display();
	v2.add("yılmaz");
	v2.add("koşar");
	v2.add("başar");
	v2.display();
	(v1+v2).display();

	return 0;
}




