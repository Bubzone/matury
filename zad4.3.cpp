#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream plik;
	string wiersz;
	int liczby[200], i=0, j, k, l, m;
	plik.open("liczby.txt");
	plik.good() ? cout << "plik otwarty" << endl : cout << "plik nie otwarty" << endl;
	while (getline(plik, wiersz)) {
		liczby[i] = stoi(wiersz);
		i++;
	}
	i = 0;
	cout << "Poprawne ZESTAWY liczb: " << endl;
	for (i = 0; i <= 199; i++){
		for (j = 0; j <= 199; j++){
			for (k = 0; k <= 199; k++){
				if (liczby[k] % liczby[j] == 0 && liczby[j] % liczby[i] == 0 && liczby[k] != liczby[j] && liczby[j] != liczby[i]) {
					cout << liczby[i] <<" | " << liczby[j] << " | " << liczby[k] << endl;
					for (l = 0; l <= 199; l++) {
						if (liczby[l] != liczby[k] && liczby[l] % liczby[k] == 0) {
							for (m = 0; m <= 199; m++) {
								if (liczby[l] != liczby[m] && liczby[m] % liczby[l] == 0) {
									cout << liczby[i] << " | " << liczby[j] << " | " << liczby[k] << " | " << liczby[l] << " | " << liczby[m] << endl;
								}
							}
						}
					}
				}
			}
		}
	}

	
}