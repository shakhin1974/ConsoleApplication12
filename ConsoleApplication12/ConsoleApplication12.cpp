#include <iostream>
#include<string>
#include"Avto.h"
#include<windows.h>
#include<iomanip>
using namespace std;
 
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    cout << "Сколько литров залить в бак \n";  
    int topl;
    cin >> topl;
    Avtomobil
        
BMW("BMW", "316", 2014, 1.9, 220.00, 
2500, 40, topl ),
Mersedez("Mersedez", "C45", 2008, 
2.1, 230.00, 55, topl),
MersedezCE45("Mersedez", "CE5", 2011, 
2.3, 225.00, 60, topl);

BMW.GAZ(1200);
BMW.STOP(5);
BMW.FREE(8);
BMW.GAZ(120);
BMW.GAZ(70);
BMW.STOP(8);
BMW.FREE(18);
BMW.GAZ(120);
BMW.GAZ(120);
BMW.STOP(5);
BMW.FREE(8);
BMW.GAZ(120);
BMW.GAZ(70);
BMW.STOP(8);
BMW.FREE(18);
BMW.GAZ(120);
BMW.vivod();
}

