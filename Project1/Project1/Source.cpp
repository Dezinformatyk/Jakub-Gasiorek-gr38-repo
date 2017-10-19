#include <iostream>
#include <math.h>
#include <Windows.h>
#include <cstdlib>
#include <string>
using namespace std;
//PODAC 3 LICZBY, WYLICZYC SREDNIA I ODCHYLENIE
/*
int main()
{
double a, b, c, d, o;
cout << "Podaj liczby do sredniej" << endl;
cin >> a >> b >> c;
d =( (a + b + c) / 3);
cout << "Srednia; " << d << endl;
o = sqrt(pow(a - d, 2) + pow(b - d, 2) + pow(c - d, 2) / 3);
cout << "Odchylenie: " << o << endl;
system("pause");
return 0;
}*/
//PROGRAM KTORY OBLICZY POLE TROJKATA, MUSI SPRAWDZIC CZY A I H>0 JESLI NIE, NAPISAC BLAD
/*
int main()
{
double a, h;
cin >> a >> h;
if (a > 0 && h > 0)
cout << "Pole jest rowne: " << (a*h) / 2<<"\n";
else
cout << "Sprawdz, czy a i h sa wieksze od zera\n";
system("pause");
return 0;

} */
// NOT DONE PROGRAM KTORY PRZECHOWUJE HASLO I LOGIN, SPRAWDZA OBIE, JESLI SA PRAWIDLOWE NASTEPUJE LOGOWANIE
/*
int main()
{
int log, haslo,l,h;
log = 1;
haslo = 2;
cout << "Podaj login: ";
cin << l;
cout << "Podaj haslo: ";
cin >> h;
if (l == log && h == haslo)
cout << "WITAMY W SYSTEMIE\n";
else
cout << "Proba zakonczona niepowodzeniem\n";
system("pause");
return 0;

}*/
// LICZYMY 1-15 FOREM
/*
int main()
{
for (int i = 1;i <= 15;i++)
cout << i << endl;
system("pause");
return 0;
}*/
//PROGRAM KTORY WYPISZE 10-1
/*
int main()
{
	for (int i = 10;i > 0;i--)
	{
		cout << i << endl;
		Sleep(250); // PO 1S POJAWIA SIE LICZBA Windows.h
		system("cls"); //CZYSCI EKRAN KONSOLI cstdlib
	}
	system("pause");
	return 0;
}*/
//PYTA O WYRAZ, LICZBE WYSWIETLEN I TYLE RAZY GO WYSWIETLIC
/*
int main()
{
	string wyraz;
	int liczba;
	cout << "Podaj wyraz: ";
	cin >> wyraz;
	cout << "Podaj ilosc wyswietlen: ";
	cin >> liczba;
	for (int i = 0;i < liczba;i++)
		cout << wyraz << endl;
	system("pause");
	return 0;
}*/
//NOT DONE PODANIE LICZBY Z KLAWIATURY Z DANEGO PRZEDZIALU, JESLI NIE TO CIAGLE PYTA
/*
int main()
{
	int l;
	do
	{
		cout << "Podaj l: ";
			cin >> l;
	} while (l>10 && l<1);
	cout << "OKEJ!";
		system("pause");
	return 0;
		
}
*/
