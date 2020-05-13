//mi-a iesit doar pentru caz particular:(

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	/*
	int k, nr, v[100];
	printf("Cate numere doriti sa cititi? ");
	scanf("%d", &nr);
	for (k = 0; k <= nr; k++)
	{
		printf("v[%d]= ");
		scanf("%d", &v[k]);
	}
	*/
	int v[] = { -2, -3, 4, -1, -2, 1, 5, -3 };

	int capat1;
	int capat2;
	int s;
	int maxim = INT_MIN;

	int n = sizeof(v) / sizeof(v[0]);

	for (int i = 0; i < n; i++) {
		s = v[i];
		for (int j = i + 1; j <= n; j++)
		{
			s = s + v[j];
			if (s > maxim) {

				maxim = s;
				capat1 = i;
				capat2 = j;
			}
		}

	}
	for (int i = capat1; i <= capat2; i++) {
		printf("%d ", v[i]);
	}

	return 0;
}