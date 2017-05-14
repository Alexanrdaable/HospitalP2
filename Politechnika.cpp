#include "Politechnika.h"
#include <iostream>
#include<string>
using namespace std;



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

std::ostream& operator << (std::ostream &s, Politechnika &politechnika) {
	s << politechnika.nazwa << endl << politechnika.rodzajSal << endl << politechnika.liczbaSalWykladowych << endl << politechnika.liczbaLaboratori�w;
	return s;
}


std::istream& operator >> (std::istream& s, Politechnika &politechnika) {
	s >> politechnika.nazwa >> politechnika.rodzajSal >> politechnika.liczbaSalWykladowych >> politechnika.liczbaLaboratori�w;
	return s;
}



string nazwaPolitechnika = "Politechnika.txt"; ///<Nazwa pliku do zapisu stanu obiektu

void Politechnika::zapiszDoPliku(Politechnika &politechnika) {

	ofstream plik_wyjsciowy(nazwaPolitechnika);
	plik_wyjsciowy << politechnika;
	plik_wyjsciowy.close();
	cout << "Zosta� wykonany zapis obiektu do pliku Politechnika.txt";

}



Politechnika::~Politechnika()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Politechnika" << endl;
#endif

}