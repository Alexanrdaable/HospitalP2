#include "Uczelnia.h"
#include <iostream>
#include<string>
using namespace std;


string nazwa_pliku_s = "Uczelnia.txt"; ///<Nazwa pliku do zapisu stanu obiektu

Uczelnia::Uczelnia()
{
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Uczelnia" << endl;
#endif
	nazwa = "Uczelnia";
	liczbaSalWykladowych = 15;
	liczbaUczelni++;

}



void Uczelnia::zmienLiczbeSal(int nowa_liczba) {
	liczbaSalWykladowych = nowa_liczba;

}

Uczelnia::~Uczelnia()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Uczelnia" << endl;
#endif
	
}