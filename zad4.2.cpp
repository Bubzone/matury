#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int ile_pierwiastków(int a) {
	int ile = 0, i = 1; 
	
	while (a > 1) {
		i++;
		if (a % i == 0) {
			ile += 1;
			a = a / i;
			i = 1;
		}
	}
	return ile;
}

int ile_roznych_pierwiastków(int a) {
	int ile = 0, i = 1, j = 0, poprzednia=0;

	while (a > 1) {
		i++;
		if (a % i == 0) {
			if (poprzednia != i) ile += 1;
			poprzednia = i;
			a = a / i;
			i = 1;
		}
	}
	return ile;
}

	

int main() {
	ifstream plik;
	int liczba=0, ile=0, ileRoznych=0, max=0, liczbaMax=0, maxRozne=0, liczbaMaxRozne=0;
	string wiersz;
	plik.open("liczby.txt");
	if (plik.good()) cout << "plik otworzony" << endl;
	while (getline(plik, wiersz)) {

		liczba = stoi(wiersz);
		ile = ile_pierwiastków(liczba);
		ileRoznych = ile_roznych_pierwiastków(liczba);

		if (max < ile) {
			max = ile;
			liczbaMax = liczba;
		}

		if (maxRozne < ileRoznych) {
			maxRozne = ileRoznych;
			liczbaMaxRozne = liczba;
		}
		
	}
	cout << "liczba z najw. iloscia pierwiaskow: " << liczbaMax << " ma ona tyle pierw:  " << max << endl;
	cout << "liczba z najw. iloscia roznych pierwiaskow: " << liczbaMaxRozne << " ma ona tyle pierw:  " << maxRozne << endl;
}