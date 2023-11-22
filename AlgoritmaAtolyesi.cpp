// AlgoritmaAtolyesi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	cout << "Ýnternet Bankacýlýðý" << endl; // Anasayfa
	cout << "Ýnternet Bankacýlýðý" << endl; // Hakkýmýda
	cout << "Ýnternet Bankacýlýðý" << endl;
	cout << "Ýnternet Bankacýlýðý" << endl;

	string internetSubesiButonu = "Ýnternet Þubesi";

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
		cout << "Dolar Ayný Kaldý" << endl;
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
