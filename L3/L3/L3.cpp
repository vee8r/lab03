
#include <iostream>
using namespace std;
int main()
{
	/*
	//zdanie 1
	int liczba, i;
	//for
	cout << "podaj liczbe: ", cin >> liczba;
	cout << "\nfor\n";
	for (int i = 0; i < liczba; i++)
	{
		cout << i << " ";
	}
	i = 0;
		cout << "\nwhile\n";
	*/

	//zadanie 2
	/*
		int liczba;
	do
	{
		cout << "podaj liczbe: ", cin >> liczba;
	} while (liczba >= 0);
	*/


	//zadanie 3
	/*
	int liczba, ile_u = 0, ile_d = 0, suma_d = 0, suma_u = 0;

	for (int i = 0; i < 10; i++) {
		cout << "podaj liczbe", cin >> liczba;
		if (liczba >= 0) {
			ile_d++;
			suma_d += liczba;
		}
		else {
			ile_u++;
			suma_u += liczba;
		}
		cout << "ilosc liczb ujemnych: " << ile_u << " , suma: " << suma_u << endl;
		cout << "ilosc liczb dodatnich: " << ile_d << " ,suma: " << suma_d << endl;
	}
	*/
	//zadanie 4
	/*int n, a, suma = 0, iloczyn = 1;
	cout << "podaj n: ", cin >> n;

	if (n > 0)
	{
		for (int i = 0; i, n; i++)
		{

			cout << "podaj liczbe: ", cin >> a;
			if (a % 2 == 0)
			{
				suma += a;
				iloczyn*=a;
			}
		}
		cout << "suma liczb parzystych: " << suma << endl;
		cout << "iloczyn liczb parzystych: " << iloczyn << endl;
	}
	else
		cout << "n nie moze byc liczba ujemna" << endl;

	*/
	/*
	int liczba;
	srand(time(NULL));
	liczba = rand() % 11 - 5;
	liczba = rand() % 21 +5;//5 - 25
	liczba = rand() % 11 ;
	*/


	// zadanie 5

	/*int n, a, suma = 0, iloczyn = 1;
	cout << "Podaj ilosc liczb: ";
	cin >> n;

	if (n > 0)
	{
	for (int i = 0; i < n; i++)
		{
		a = rand() % 56 - 5;
		cout << a << endl;

		if (a % 2 == 0)
		{
			suma += a;
			iloczyn *= a;
		}
		}
			cout << "suma liczb parzystych: " << suma << endl;
			cout << "iloczyn liczb parzystych: " << iloczyn << endl;
		}
		else
			cout << "n nie moze byc liczba ujemna" << endl;*/

	//ZADANIE 1 (1.1)
	/*
	int n, punkty, suma = 0;
	float srednia;

	cout << "ilosc studnetow: ", cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "student - " << i << endl << " podaj punkty: ", cin >> punkty;

		suma += punkty;
	}
	srednia = suma / n;
	cout << "suma: " << suma << endl;
	cout << "srednia: " << srednia << endl;
	*/


	//ZADANIE 2
	/*
		int i = 0, n, p, suma = 0;
	float srednia;

	cout << "Podaj liczbe studentow: ";
	cin >> n;

	while (i < n)
	{
		cout << "Podaj liczbe punktow tego studenta" << endl;
		cin >> p;
		if (p >= 0 && p <= 100)
			suma += p;
		else
		{
			cout << "Blad, zacznij od nowa" << endl;
			break;
		}
		i++;
	}

	srednia = suma / n;
	cout << "srednia liczba punktow tej grupy to:" << srednia << endl;


	//ZADANIE 4
		int i = 0, n, p, suma = 0;
	float srednia;

	cout << "Podaj liczbe studentow: ";
	cin >> n;

	do
	{
		cout << "Podaj liczbe punktow tego studenta" << endl;
		cin >> p;
		if (p >= 0 && p <= 100)
			suma += p;
		else
		{
			cout << "Blad, zacznij od nowa" << endl;
			break;
		}
		i++;
	} while (i < n);

	if (n > 0)
	{
		srednia = suma / n;
		cout << "srednia liczba punktow tej grupy to:" << srednia << endl;
	}
	*/

	//ZADANIE 5
	/*
	int i = 1;
	
	for (i ; i <= 100; i++)
	{
		cout << i << endl;
	}

	for (i = 100; i >= 0; i--)
	{
		cout << i << endl;
	}

	for (i = 7; i <= 77; i+=7)
	{
		cout << i << endl;
	}
	
	for (i = 20; i >= 0; i -= 2)
	{
		cout << i << endl;
	}
	*/








}





