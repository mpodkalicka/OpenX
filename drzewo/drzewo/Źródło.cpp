#include<iostream>
using namespace std;

void kopiec(int *tab, int rozmiar, int n)
{
	int L, R, najwiekszy;
	int a = 2 * n;
	int b = 2 * n + 1;
	L = tab[a];
	R = tab[b];
	if (a <= rozmiar && tab[a]>tab[n])
	{
		najwiekszy = a;
	}
	else
		najwiekszy = n;
	if (b <= rozmiar && tab[b]>tab[najwiekszy])
		najwiekszy = b;
	if (najwiekszy != n)
	{
		kopiec(tab, rozmiar, najwiekszy);
	}
}
void buildheap(int *tab, int n)
{
	for (int i = n / 2; i>0; i--)
	{
		kopiec(tab, n, i);
	}
}

void zamien(int *tab, int n)
{
	swap(tab[1], tab[n]);
}
void heap1(int *tab, int n)
{
	buildheap(tab, n);
	
}

int main()
{
	int n = 11;
	int r = n;
	int *tab = new int[n];
	tab[1] = 5;
	tab[2] = 3;
	tab[3] = 7;
	tab[4] = 2;
	tab[5] = 5;
	tab[6] = 1;
	tab[7] = 0;
	tab[8] = 2;
	tab[9] = 8;
	tab[10] = 5;

	for (int i = 1; i<n; i++)
		cout << tab[i] << endl;
	heap1(tab, n - 1);
	system("PAUSE");
	return 0;
}


