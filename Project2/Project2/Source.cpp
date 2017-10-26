#include <iostream>
using namespace std;
//SREDNIA SLABO : Napisac program, ktory: deklaruje tablice jednowymiarowa typu integer z 6 elementami, wypelnia ja wartosciami podanymi z klawiatury
//,wyswietla wartosci na ekranie zgodnie ze wzorem : "wartosc elementu i = x", gdzie 'i' okresla numer elementu a 'x' wartosc, ktora zostala mu przypisana,oblicza srednia podanych liczb.
/*
int main()
{
float tab[6],s=0,j=0;
for (int i = 0;i < 6;i++)
tab[i] = i;
for (int k = 0;k < 6;k++)
{
cout << "Wartosc elementu " << k + 1 << " jest rowna: " << tab[k]<<endl;
}
for (j = 0;j < 6;j++)
s = s + tab[j];
cout << "Srednia wynosi: " << s / j;
system("pause");
return 0;
}*/
// Napisac program, ktory wyznacza wybrana liczbe ciagu Fibonacciego. : DZIALA POPRAWNIE
/*
int main()
{
	int fib[50], n;
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2;i <= 52;i++)
		fib[i] = fib[i - 1] + fib[i - 2];
	cout << "Ktory element ciagu wyswietlic? Liczymy od 0 do 50 :" << endl;
	cin >> n;
	cout << "Element " << n << " tablicy wynosi: " << fib[n-1];
	system("pause");
	return 0;
}*/
//Napisac program, ktory wykorzystujac sortowanie b¹belkowe, sortuje elementy wybranej tablicy. KURDE DZIALA
int main()
{
	
	int tab[3],n=4;
	
	tab[0] = 9;
	tab[1] = 2;
	tab[2] = 7;
	tab[3] = 4;
	do
	{
		for (int i = 0;i <= 4;i++)
		{
			if (tab[i] > tab[i + 1])
				swap(tab[i], tab[i + 1]);
		}
		n--;
	}
			while (n > 1);
	for (int j = 0;j < 4;j++)
		cout << tab[j] << endl;

			system("pause");
			return 0;

}
