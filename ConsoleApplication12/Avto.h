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
		cout << "���������� " << brand << " " << marka
			<< " ���������� �  ���������� \n";
	}
	else 
	{
		cout << "���������� " << brand << " " << marka
			<< " �� ���������� �  ���������� \n";
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
