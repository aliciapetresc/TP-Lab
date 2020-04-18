#include <stdio.h>
#include <stdlib.h>


int prim(int x)
{
	int i;
	for (i = 2; i <= x / 2; i++)
		if (x%i == 0) 
			return 0;

	return 1;
}
int valid(int k, int st[20])
{
	int i;
	for (i = 1; i < k; i++)
		if (st[i] == st[k]) 
			return 0;

	return 1;
}

int afisare(int v[20], int st[20], int k)
{
	int i, nr = 0;

	for (i = 1; i <= k; i++)
	{
		nr = nr * 10 + v[st[i]];
	}
	if (prim(nr) == 1) 
		return 1;
	else 
		return 0;
}

int back(int v[20], int n)
{
	int st[6], k = 1, ok;
	st[k] = 0;

	while (k != 0)
	{
		if (k <= n) 
		{
			do 
			{
				if (st[k] < n) 
				{
					st[k]++;
					ok = 1;
				}
				else ok = 0;
			} while (valid(k, st) == 0 && ok == 1);
		}
		if (ok == 1) 
		{
			if (k == n)
			{
				if (afisare(v, st, k) == 0)
					return 0;  // functia in care se genereaza numarul si se verifica daca este prim
			}
				else 
				{ 
				k++;
				st[k] = 0;
				}
		}
		else k--;
	}
	return 1;
}

void generare()
{
	int i, v[5], j, x;

	for (i = 1; i < 10000; i++) // cauta numere pana la 10000
	{
		if (prim(i) == 1) 
		{
			x = i;             // daca numarul este prim se vor extrage cifrele 

			for (j = 1; j < 6; j++) v[j] = 0;

			j = 0;
			x = i;
			while (x)
			{
				j++;
				v[j] = x % 10;
				x = x / 10;
			}
			if (back(v, j) == 1) 
				printf("%d\n", i); // folosim backtracking ul pentru generarea de solutii, iar in cazul in care
		}                                   // solutiile sunt prime atunci returneaza 1

	}
}

int main()
{
	generare();
	return 0;
}
