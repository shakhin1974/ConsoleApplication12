#pragma once
#include <iostream>
#include <string>
using namespace std;
class Avtomobil
{ public:
	int speed = 0;
	Avtomobil(string b, string m, int y, float o, int MS, int w)
	{ brand = b;
	marka = m;
	year = y;
	obyem = o;
	MaxSpeed = MS;
	weigth = w; }
	 ~Avtomobil() {}
int GAZ( int time )
{ for (int i = 0; i < time; i++)
	{ if (speed <= MaxSpeed  )
	{ speed = speed + 8;
	cout << speed<<endl;} 
} 	return  speed;  }
int FREE (int time)
{
	for (int i = 0; i < time; i++)
	{
		if (speed <= 10)
		{
			speed = speed -8;
			cout << speed << endl;
		}
	} 	return  speed;
}
int STOP (int time)
{ 	for (int i = 0; i < time; i++)
	{ if (speed >= 15 ) 
	{speed = speed - 14;
	cout << speed << endl; }
	if (speed < 10)
	{ speed = 0;
	cout << speed << endl; 	break; } }
return speed ; }
private:
	string brand{};
	string marka{};
	int year{};
	float obyem{};
	int MaxSpeed{};
	int weigth; };
