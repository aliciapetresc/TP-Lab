
// P4: suma numerelor pana la “N” printr-o functie recursiva
#include <stdio.h>
#include <stdlib.h>


int suma(int n);

int main() 
{
	int nr;
	printf("Introduceti ultimul nr din suma : ");
	scanf("%d", &nr);

	printf("Suma = %d", suma(nr));

	system("pause");
	return 0;
}

int suma(int n) 
{
	if (n != 0)
		return n + suma(n - 1);
	else
		return n;
}



// suma nr pana la "N" prin metodele repetitive- for

/*
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n, i, suma = 0;

	printf("Introduceti ultimul nr din suma: ");
	scanf("%d", &n);

	for (i = 1; i <= n; ++i) 
	{
		suma= suma+ i;
	}

	printf("Suma = %d", suma);

	system("pause");
	return 0;
}

*/



// suma nr pana la "N" prin metodele repetitive- while

/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i=1, suma = 0;

	printf("Introduceti ultimul nr din suma: ");
	scanf("%d", &n);
	
	while (i <= n) 
	{
		suma=suma+ i;
		++i;
	}

	printf("Suma = %d", suma);

	system("pause");
	return 0;
}

*/
