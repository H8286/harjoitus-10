/*Sami Liimatainen
IIO14S1
Harjoitus 10
Versio 1
30.9.2014

Tee ohjelma, joka laskee syötetyistä kokonaisluvuista sekä positiivisten
että negatiivisten kokonaislukujen osuuden. Lukujen syöttä lopetetaan
syöttämällä luku 0.

Tulostus:
Syötit kokonaislukuja seuraavasti:
----------------------------------
Negatiiviset 7 kpl 70.00%
Positiiviset 3 kpl 30.00%
Yhteensä 10 kpl 100.00%*/

#include <iostream>
using namespace std;
int main()
{
	int luku = 0;
	int nega = 0;
	int posi = 0;
	int yhteensa = 0;
	int valinta;
	int merkki = 0;
	
	while (merkki == 0)
	{
		cout << "\nValitse toiminto:";
		cout << "\n1 Anna uusi luku";
		cout << "\n0 Lopeta ja näytä tulos\n";
		cin >> ws >> valinta;
		switch (valinta)
		{
		case 1:cout << "Anna luku ";
			cin >> luku;
			if (luku < 0)
				nega = nega++;
			else
				posi = posi++;
			break;
		case 0:cout << "Tulostus:\nSyötit kokanaislukuja seuraavasti:\n----------------------------------\n";
			yhteensa = posi + nega;
			cout << "Negatiiviset " << nega << "kpl " << (float)nega / yhteensa * 100 << "%\n";
			cout << "Positiiviset " << posi << "kpl " << (float)posi / yhteensa * 100 << "%\n";
			cout << "Yhteensä " << yhteensa << "kpl " << (float)yhteensa / yhteensa * 100 << "%\n";
			merkki++;
			break;
		default: cout << "\nValitse arvo 1 tai 0\n";
			break;
		}
	}
}