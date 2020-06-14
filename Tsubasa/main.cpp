//is a & has a - relation analyze example
//polymorphism example
#include <iostream>

using namespace std;

class Player{
public:
	string name;
	int level;
	Player(string name):name(name),level(1){}
	virtual void shoot(){
		cout<<name<<"'s shoot speed is "<<level*10<<endl;
	}
	void doTraining(){
		cout<<this->name<<" did training!"<<endl;
		this->level+=1;
	}
};
class Tsubasa : public Player{
private:
	void eagleShoot(){
		cout<<name<<"'s eagle shoot has "<<level*30<<" kph speed!!"<<endl;
	}

public:
	Tsubasa():Player("Tsubasa"){};
	void shoot(){
		if(rand()%2)//babuş mükemmel birsey bu 1 true demek
			eagleShoot();
		else
			Player::shoot();
	}
};

int main(){
	//<Is a , Has a relation>
	/*Player p1("Takeshi");
	p1.shoot();
	Player p2("Misaki");
	p2.shoot();
	Tsubasa t1;
	t1.eagleShoot();
	p1.doTraining();
	p1.shoot();*/
	//<end/>
	//<polymorphism>
	Player* kadro[11];
	kadro[0]=new Player("Wakabayashi");	
	kadro[1]=new Player("Takeshi");	
	kadro[2]=new Player("Koji Nishio");	
	kadro[3]=new Player("Nakayama");	
	kadro[4]=new Player("Hanji Urabe");	
	kadro[5]=new Player("Takasugi");	
	kadro[6]=new Player("Hajime Taki");	
	kadro[7]=new Player("Izawa");	
	kadro[8]=new Player("Kisugi");	
	kadro[9]=new Tsubasa();	
	kadro[10]=new Player("Misaki");	
	//rastgele şut çekiyoruz
	srand(time(0));//her defasında farklı rastsal üretmek için 
	for(int i=0;i<10;i++){
		int r=rand()%11;
		kadro[r]->shoot();
	}
	//tsubasa kartal veya normal şut
	for(int i=0;i<5;i++){
		kadro[9]->shoot();
	}
	//<end/>
	return 0;
}
