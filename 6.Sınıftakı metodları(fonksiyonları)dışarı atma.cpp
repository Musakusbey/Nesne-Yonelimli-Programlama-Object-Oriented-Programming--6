#include <iostream>

using namespace std;

class Nokta
{
	public:
		
		int x,y;
		
		void degerata(int,int);
		
		void ekranayaz();
	
};

void Nokta::degerata(int _x,int _y)
{
	x=_x;
	
	y=_y;
}

void Nokta::ekranayaz()
{
	cout<<x<<","<<y<<endl;
}

int main ()
{
	Nokta n1;
	
	n1.degerata(5,10);
	
	n1.ekranayaz();
	
	return 0;
}
