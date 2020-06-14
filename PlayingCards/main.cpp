//iskambil kartı örneği
//is a : class a is a class b (inheritance)
//has a : class a has a class b (nested class)
#include <iostream>
#include <time.h>
#define kupa (0) //haçen ha buraya ha kupa yazmişsun ha sifur yazmişssun, heç farkı yokdur
#define sinek (1)
#define maca (2)
#define karo (3)
#define as (1)
#define vale (11)
#define kiz (12)
#define papaz (13)

using namespace std;

class Card{
private:
	int seri;
	int deger;
public:
	Card(int seri=kupa,int deger = 2) : seri(seri),deger(deger){ }
	int getSeri()const{ return seri;}
	int getDeger()const {return deger;}
	void display()const {
		switch(seri){
			case kupa:
				cout<<"kupa";
				break;
			case sinek:
				cout<<"sinek";
				break;
			case maca:
				cout<<"maca";
				break;
			case karo:
				cout<<"karo";
				break;
		}
		cout<<"  ";
		switch(deger){
			case as:
				cout<<"as";
				break;
		case vale:
				cout<<"vale";
				break;
		case kiz:
				cout<<"kız";
				break;
		case papaz:
				cout<<"papaz";
				break;
		default:
				cout<<deger;
				break;
		}
		cout<<endl;
	}
	
};
class Deste{
private:
	Card cards[52];
	int top=0;
public:
	Deste(){
		for(int i=0;i<52;i++)
			cards[i]=Card(i/13,i%13+1);//mikemmel bir olay/13+1 in sebebi mod hiçbir zaman 13 olmaz ama papaz 13 değerinde
	}
	void display(){
		for(int i=0;i<52;i++)
			cards[i].display();
	}
	void mix(int times=50){
		cout<<"Mixture\n";
		Card temp;
		for(int i=0;i<times;i++){
			int x=rand() % 52;
			int y=rand() % 52;
			if(x!=y){
				temp=cards[x];
				cards[x]=cards[y];
				cards[y]=temp;
			}
		}
	}
	Card bring(){
		return cards[top++];//önce cards[top] ı ver , sonra ++ yap anlamına gelir (post fix) önce kullan sonra arttır
	}

};

int main(){
	//<kart oluşturma örneği>
	/*Card c1;
	c1.display();
	cout<<c1.getSeri()<<"  "<<c1.getDeger()<<endl;
	Card c2(sinek,kiz);
	c2.display();
	Card c3(3,8);
	c3.display();*/
	//</>
	//<Deste örneği>
	Deste d;
	d.display();
	d.mix(10);
	d.display();
	cout<<"ver oradan bir kart\n";
	d.bring().display();//**eğer bir fonksiyonun return değeri, diğerinin parametresi ise bu şekilde bağlanabilir 
	//</>
	return 0;
}


