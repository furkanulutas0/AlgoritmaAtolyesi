// AlgoritmaAtolyesi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	cout << "�nternet Bankac�l���" << endl; // Anasayfa
	cout << "�nternet Bankac�l���" << endl; // Hakk�m�da
	cout << "�nternet Bankac�l���" << endl;
	cout << "�nternet Bankac�l���" << endl;

	string internetSubesiButonu = "�nternet �ubesi";

	cout << internetSubesiButonu << endl;
	cout << internetSubesiButonu << endl;
	cout << internetSubesiButonu << endl;
	cout << internetSubesiButonu << endl;
	cout << internetSubesiButonu << endl;

	double dolarDun = 21.3;
	double dolarBugun = 21.3;

	if (dolarBugun < dolarDun)
	{
		cout << "Dolar Dustu Resmi" << endl;
	}
	else if (dolarBugun > dolarDun) {
		cout << "Dolar yukseldi resmi" << endl;
	}
	else
	{
		cout << "Dolar Ayn� Kald�" << endl;
	}



	string krediler[] = {
		"Hizli Kredi",
		"Msb Kredisi",
		"Mbk Kredisi",
		"LOOP kredisi",
		"LOOP kredisi",
		"LOOP kredisi",
		"LOOP kredisi",
		"LOOP kredisi",
		"LOOP kredisi",
	};

	//for (string kredi: krediler) // foreach
	//{
	//	cout << kredi << endl;
	//}
	for (int i = 0; i < 9 ; i++)
	{
		cout << krediler[i] << endl;
	}
	int counter = 0;

	while (counter < 9)
	{
		cout << krediler[counter] << endl;
		counter++;
	}


}
