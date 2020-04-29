#include <stdio.h>
#include <stdlib.h>


int binary(int A[], int left, int right, int x)
{
	if (right >= left)
	{
		int mid = left + (right - left) / 2;

		// element la mijlocul sirului
		if (A[mid] == x)  return mid;

		// elem <mijloc => se afla in stanga subsirului
		if (A[mid] > x) return binary(A, left, mid - 1, x);

		// elem>mijloc => se afla in dreapta subsirului
		return binary(A, mid + 1, right, x);
	}

	// elem nu e in sir
	return -1;
}

int main(void)
{
	int i, A[100], n,x;

	printf("Cate numere doriti sa cititi? ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("A[%d]=", i);
		scanf("%d", &A[i]);
	}

	printf("Numarul pe care il cautati este: ");
	scanf("%d", &x);

	int rez = binary(A, 0, n - 1, x);
	if (rez == -1)
		printf("Elementul nu a fost gasit\n");
	else
		printf("Elementul a fost gasit pe pozitia %d   ", rez);

	system("pause");
	return 0;
}