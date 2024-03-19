#pragma once
#include <iostream>
#include <string>
using namespace std;
class Avtomobil
{
public:
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
	 
 
void util()
{
	if (year < 2014)
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
int skorost( int Speed )
{
	int ql = 0;
	while (Speed < MaxSpeed - 40) {
		return ql + Speed;
	}
}

private:
	string brand{};
	string marka{};
	int year{};
	float obyem{};

	int MaxSpeed{};
	int weigth;
};
