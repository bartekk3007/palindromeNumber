#include <stdio.h>

typedef enum { false, true } bool;

bool isPalindrome(int x)
{
	bool wynik;
	int tab[12];
	wynik = true;
	if (x < 0)
	{
		wynik = false;
	}
	else if (x < 10)
	{
		wynik = true;
	}
	else
	{
		int licznik;
		licznik = 0;
		int pocz;
		pocz = 0;
		while (x != 0)
		{
			tab[licznik] = x % 10;
			x /= 10;
			licznik++;
		}
		licznik--;
		while (licznik > pocz)
		{
			if (tab[pocz] != tab[licznik])
			{
				wynik = false;
			}
			pocz++;
			licznik--;
		}
	}
	return wynik;
}

int main()
{
	int x = 131;
	bool wynik = isPalindrome(x);
	printf("%d", wynik);

	return 0;
}