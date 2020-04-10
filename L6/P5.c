
/*
P5.Se da un set de valori “W”. Sa se scrie la sfarsit toate combinatiile a elementelor din setul respectiv
care sa dea suma “S” fara a se repeta valorile din W.

*/

#include <stdlib.h>
#include <stdio.h>


void Print(int subset[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", subset[i]);
	}
	printf("\n");
}

void subsetSuma(int W[], int subset[], int a, int subSize, int suma, int nrnod, int S)
{
	if (suma == S)
	{
		Print(subset, subSize);    
		subsetSuma(W, subset, a, subSize - 1, suma - W[nrnod], nrnod + 1, S);     //for other subsets
		return;
	}
	else
	{
		for (int i = nrnod; i < a; i++)
		{     
			subset[subSize] = W[i];
			subsetSuma(W, subset, a, subSize + 1, suma + W[i], i + 1, S);     //do for next node in depth
		}
	}
}


void findSubset(int W[], int size, int S)
{
	int *subset = malloc(size * sizeof(int));   //create subset array 
	subsetSuma(W, subset, size, 0, 0, 0, S);
	free(subset);
}


int main()
{
	int size, i, S, W[100];

	printf("Cate nr doriti sa cititi? "); scanf("%d", &size);

	printf("Care sunt numerele? \n");
	for (i = 1; i <= size; i++)
	{
		printf("v[%d]=", i); scanf("%d", &W[i]);
	}

	printf("Care este suma? "); scanf("%d", &S);

	findSubset(W, size, S);


	system("pause");
	return 0;
}