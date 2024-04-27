#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	ifstream plik;
	string wiersz, koniec;
	int k=0;
	plik.open("liczby.txt");
	if (plik.good()) cout << "Plik otworzony" << endl;
	while (getline(plik,wiersz)) {
		if (wiersz[0]==wiersz[wiersz.size()-1]){
			if(k==0) {
				cout << wiersz << endl;
			}
			k++;
		}
	}
	cout << " ilosc : " << k << endl;
}
