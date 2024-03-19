#pragma once
#include <iostream>
#include <string>
using namespace std;
class Avtomobil
{
public:
	int speed = 0;
	Avtomobil(string b, string m,
		int y, float o, int MS, int w)
	{
		brand = b;
		marka = m;
		year = y;
		obyem = o;
		MaxSpeed = MS;
		weigth = w;
		

	}
	 ~Avtomobil() {}
void util()
{
	if (year < 2004)
	{
		cout << "Автомобиль " << brand << " " << marka
			<< " подлежащит к  утилизации \n";
	}
	else 
	{
		cout << "Автомобиль " << brand << " " << marka
			<< " НЕ подлежащит к  утилизации \n";
	}
}
int GAZ( int Speed )
{
	int q = 0;
	if (Speed < MaxSpeed - 40) {
		return q + Speed;
	}
}

int stop (int time)
{
	for (int i = 0; i < time; i++)
	{
		if (speed > 0 ) {
			speed = speed  / 1.5;
			cout << speed << endl;
			
		}
		
	}
	 return speed;
	
	
}

private:
	string brand{};
	string marka{};
	int year{};
	float obyem{};
	int MaxSpeed{};
	int weigth;
	
};
