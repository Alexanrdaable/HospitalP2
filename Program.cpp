#include <cstdlib>
#include "Dane.h"
#include "Pacjent.h"
#include "Parametry.h"	
#include "Szpital.h"
#include "Uczelnia.h"
#include "Politechnika.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int wybor;
int liczba;


int main() {

	Szpital budynek1;
	Uczelnia budynek2;
	Politechnika budynek3;
	int obiekt = 1;

	do {
		switch (wybor)
		{
		case 0:
			cout << endl;
			cout << "INTERFEJS UZYTKOWNIKA" << endl <<endl;
			cout << "Dostepne operacje do wyboru:" << endl;
			cout << "1. Wybor obiektu" << endl;
			cout << "2. Wyswietl aktualny stan" << endl;
			cout << "3. Zapis informacji do pliku tekstowego" << endl;
			cout << "4. Odczyt informacji z pliku tekstowego" << endl;
			cout << "5. Wprowadz modyfikacje w obiekcie" << endl;
			
			cout << "8: Zamknij program" << endl;
			cout << endl;
			cout << "Wybrane dzialanie programu: ";
			cin >> wybor;
			break;
		case 1:
			system("cls");
			do {
				cout << "Prosze wybrac obiekt: " << endl;
				cout << "1: Szpital" << endl << "2: Uczelnia" << endl << "3: Politechnika" << endl << "Wybrany obiekt: ";
				cin >> obiekt;
				cout << endl;
			}

			while (obiekt != 1 && obiekt != 2 && obiekt != 3);
				
			//ponowne wypisanie menu, po wykonaniu operacji
			wybor = 0;
			break;
			
		case 2:
			system("cls");
			cout << "***Informacje na temat obecnego obiektu***" << endl;
			if (obiekt == 1)
				budynek1.wypiszInformacje();
			else if (obiekt == 2)
				budynek2.wypiszInformacje();
			else if (obiekt == 3)
				budynek3.wypiszInformacje();
			wybor = 0;
			break;
		case 3:
		{
			system("cls");
			cout << "***Zapisywanie do pliku***" << endl;
			if (obiekt == 1){
				budynek1.zapiszDoPliku(budynek1);
				cout << "Udalo sie zapisac informacje do pliku typu Szpital.txt! " << endl;
			}
			else if (obiekt == 2) {
				budynek2.zapiszDoPliku(budynek2);
				cout << "Udalo sie zapisac informacje do pliku typu Uczelnia.txt! " << endl;
			}
			else if (obiekt == 3) {
				budynek3.zapiszDoPliku(budynek3);
				cout << "Udalo sie zapisac informacje do pliku typu Politechnika.txt! " << endl;
			}
			wybor = 0;
			break;
		}


		case 4:
		{
			system("cls");
			cout << "***Wczytywanie z pliku***" << endl;
			if (obiekt == 1) {
				budynek1.odczytZPliku(budynek1);
				cout << "Udalo sie odczytac informacje z pliku typu Szpital.txt! " << endl;
			}
			else if (obiekt == 2) {
				budynek2.odczytZPliku(budynek2);
				cout << "Udalo sie odczytac informacje z pliku typu Uczelnia.txt! " << endl;
			}
			else if (obiekt == 3) {
				budynek3.odczytZPliku(budynek3);
				cout << "Udalo sie odczytac informacje z pliku typu Politechnika.txt! " << endl;
			}
			wybor = 0;
			break;
		}

			
		case 5: 
			system("cls");
			cout << " ***Wprowadz modyfikacje w obiekcie***" << endl;
			cout << "Zmien liczbe sal charakterystycznych dla obecnego obiektu" <<endl;
			cin >> liczba;
			if (obiekt == 1) {
				budynek1.zmienLiczbeSal(liczba);
				cout << "Zmieniono liczbe oddzialow w szpitalu" << endl;
			}
			else if (obiekt == 2) {
				budynek2.zmienLiczbeSal(liczba);
				cout << "Zmieniono liczbe sal wykladowych" << endl;
			}
			else if (obiekt == 3) {
				budynek3.zmienLiczbeSal(liczba);
				cout << "Zmieniono liczbe laboratoriow" << endl;
			}
			wybor = 0;
			break;
		





	
		default:
			system("cls");
			cout << "Wybrano niepoprawna opcje." << endl;
			wybor = 0;
		}


	} while (wybor != 8);
	

	return 0;
}
