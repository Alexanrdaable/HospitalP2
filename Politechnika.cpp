#include "Politechnika.h"
#include <iostream>
#include<string>
using namespace std;


string nazwa_pliku_s = "Politechnika.txt"; ///<Nazwa pliku do zapisu stanu obiektu

Politechnika::Politechnika()
{
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Politechnika" << endl;
#endif
	nazwa = "Politechnika";
	liczbaLaboratori�w = 3;
	liczbaUczelni++;
	rodzajSal = "Sale wykladowe i Laboratoria";
}



void Politechnika::wypiszInformacje() {

	cout << "Nazwa budynku: " << nazwa << endl << "Rodzaj sal: " << rodzajSal << endl << "Liczba sal: " << liczbaSalWykladowych << endl << "Liczba laboratoriow: " << liczbaLaboratori�w << endl;
}

void Politechnika::zmienLiczbeSal(int nowa_liczba) {
	liczbaLaboratori�w = nowa_liczba;

}

Politechnika::~Politechnika()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Politechnika" << endl;
#endif

}