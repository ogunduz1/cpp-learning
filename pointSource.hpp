#ifndef _POINT_H_
#define _POINT_H_
class Nokta{
private:
	int x,y;
	static int j;
public:
	const int t;
	int* z;
	static int i;//bellekde tek yer tutar, program çalışınca önce statiklere yer ayrılır/constructorda değer verilmez
	Nokta();
	Nokta(int,int,int);
	Nokta(const Nokta&);
	~Nokta();
	static void setJ(int);//class içinde static yazıldı, clasın dışında static keywordu yazılmayacak, hata veriyor.
	static int getJ();
	int getX() const;
	int getY() const;
	void setX(int);
	void setY(int);
	void display();
	bool IsOrigin();
};
#include "pointSource.cpp"
#endif
