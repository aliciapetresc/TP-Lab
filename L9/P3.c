/*Se citeste o valoarea “N”, sa se determine cea mai lunga secventa de cifre care sa respecte
urmatoarea secventa.
n = n / 2 (n este par)
n = 3n + 1 (n este impar)
	N : 13
	Sir : 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

	*/

#include <stdio.h>
#include <stdlib.h>


void operatii(int n);


int main()
{
	int n;

	printf("Dati un nr intreg: ");
	scanf("%d", &n);
	printf("%d->", n);

	operatii(n);
	return 0;
}

void operatii(int n)
{
	while (n != 1)
	{
		if (n % 2 == 0)           //nr par
		{
			printf("%d->", n / 2);
			return operatii(n / 2);
		}
		else                                      //nr impar
		{
			printf("%d->", 3 * n + 1);
			return operatii(3 * n + 1);
		}
	}
}
