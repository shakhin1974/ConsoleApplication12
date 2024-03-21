#pragma once
#include <iostream>
#include <string>
using namespace std;
class Avtomobil
{ public:
	double speed = 0.0;
	double way = 0.0;
	double k = 0.0;
	Avtomobil(string b, string m, int y,
		double d, double MS, int w, int buck,
		double t = 0.0)
	{
		brand = b;
		marka = m;
		year = y;
		dvigatel = d;
		MaxSpeed = MS;
		weigth = w;
		toplivo = t;
	}
	 ~Avtomobil() {}
	 double GAZ(int time)
	 {	k = k+ time;
	 for (int i = 0; i < time; i++)
		 {
			 if (speed <= MaxSpeed - 40.00)
				 if (toplivo < bak)
					 break;
				 else
			
speed = round(speed + 8.00);
way += (speed) / 3600.00;
toplivo -= way / 9000;
cout << "Gaz i =" << round(i/60.00) << " Speed " << speed
<< " Way " << way << " toplivo " 
<< toplivo << endl;
if (toplivo < 0)
break;
} 	 cout << "Время на дороге = " << k << endl;
	 return  speed, way, toplivo;
	
}
double FREE (int time)
{
	k = k+ time;
	for (int i = 0; i < time; i++)
	{ if (speed >= 10.00)
	speed = round (speed -8.00);
	way += (speed) / 3600.00;
	toplivo -= way / 9900;
	cout << "Free i =" << round (i / 60.00) 
		<< " Speed " << speed
		<< " Way " << way << " toplivo "
		<< toplivo << endl;
	if (toplivo < 0)
		break;	

	} 	
	cout << "Время на дороге = " << k << endl;
	return  speed, way, toplivo;
}
double STOP (int time)
{
	k = k + time;
	for (int i = 0; i < time; i++)
	{ if (speed >= 5.00 ) 
	{
	speed -= 18.00;
	way += (speed) / 360.00;
	toplivo -= way / 9000;
cout << "Stop i =" << round (i / 60.00) << " Speed " << speed
<< " Way " << way << " toplivo " << toplivo << endl;
	if (toplivo < 0)
		break;
}
	if (speed < 5.00)
	{ speed = 0;
	cout << speed << endl; 	break; } }
	cout << "Время на дороге = " << k << endl;
return  speed, way, toplivo;
}
void vivod() {
	cout << "Общее время на дороге = " << k / 60<<endl;
}
private:
	string brand{};
	string marka{};
	int year{};
	double dvigatel{};
	double MaxSpeed{};
	int weigth{};
	int bak{};
	double toplivo {}; 
};
