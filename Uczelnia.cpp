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
	rodzajSal = "Sale wykladowe";

}

void Uczelnia::wypiszInformacje() {

	cout << "Nazwa budynku: " << nazwa << endl << "Rodzaj sal: " << rodzajSal << endl << "Liczba sal: " << liczbaSalWykladowych << endl;
}

void Uczelnia::zmienLiczbeSal(int nowa_liczba) {
	liczbaSalWykladowych = nowa_liczba;

}



std::ostream& operator << (std::ostream &s, Uczelnia &uczelnia) {
	s << uczelnia.nazwa << endl << uczelnia.rodzajSal << endl << uczelnia.liczbaSalWykladowych;
	return s;
}

std::istream& operator >> (std::istream& s, Uczelnia &uczelnia) {
	s >> uczelnia.nazwa >> uczelnia.rodzajSal >> uczelnia.liczbaSalWykladowych;
	return s;
}




string nazwaUczelnia = "Uczelnia.txt"; ///<Nazwa pliku do zapisu stanu obiektu

void Uczelnia::zapiszDoPliku(Uczelnia &uczelnia) {

	ofstream plik_wyjsciowy(nazwaUczelnia);
	plik_wyjsciowy << uczelnia;
	plik_wyjsciowy.close();
	cout << "Zosta³ wykonany zapis obiektu do pliku Uczelnia.txt";

}

void Uczelnia::odczytZPliku(Uczelnia &uczelnia) {
	ifstream plik(nazwaUczelnia);
	plik >> uczelnia;
	plik.close();
	cout << "Zosta³ wykonany odczyt z pliku Uczelnia.txt" << endl;
}






Uczelnia::~Uczelnia()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Uczelnia" << endl;
#endif
	
}