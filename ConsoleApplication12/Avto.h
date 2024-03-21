#pragma once
#include <iostream>
#include <string>
using namespace std;
class Avtomobil
{ public:
	int speed = 0;
	int way = 0;
	Avtomobil(string b, string m, int y, double o, int MS, int w)
	{ 
	brand = b;
	marka = m;
	year = y;
	obyem = o;
	MaxSpeed = MS;
	weigth = w;
 
	}
	 ~Avtomobil() {}
int GAZ( int time )
{ for (int i = 0; i < time; i++)

	{ if (speed <= MaxSpeed   )
	 speed = speed + 8;
	way += time *speed / 3600;
	cout << "Speed " << speed << " Way "<<way<<endl; 
} 	return  speed, way;  }
int FREE (int time)
{
	for (int i = 0; i < time; i++)
	{
		if (speed <= 10)
		{
			speed = speed -8;
			way += time * speed / 3600;			
			cout << "Speed " << speed << " Way " << way << endl;
		}
	} 	return  speed, way;

}
int STOP (int time)
{ 	for (int i = 0; i < time; i++)
	{ if (speed >= 5 ) 
	{
	cout <<"Speed " << speed <<" Way "<<way<< endl;
	speed -= 24;
	way += time * speed / 3600;
}
	if (speed < 1)
	{ speed = 0;
	cout << speed << endl; 	break; } }
return speed , way; }
private:
	string brand{};
	string marka{};
	int year{};
	double obyem{};
	int MaxSpeed{};
	int weigth{};
	
 
};
