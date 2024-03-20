#include <iostream>
#include<string>
#include"Avto.h"
#include<windows.h>
#include<iomanip>
using namespace std;

void stop()
{

}

int main()
{
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 Avtomobil
        BMW("BMW", "316", 2014, 1.9, 220, 2500),
        Mersedez("Mersedez", "C45", 2008, 2.1, 230, 3200),
        MersedezCE45("Mersedez", "CE5", 2011, 2.3, 225, 3900);
    cout << "Время нажатия на педаль Газ";
    int n;  
    cin >> n;
    cout << "Укаажи ускарение скорости за одну секунду";
      BMW.GAZ(n);
    cout << "Введите секунды для тормоза: ";
    int time;
    cin >> time;
    cout << endl;

    BMW.stop(time);

}


