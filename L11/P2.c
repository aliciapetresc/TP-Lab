#include <stdio.h>

int main() {

	int v[100];
	int i = 1;
	int k;
	int n = 0;
	printf("Dati o suma: ");
	scanf("%d", &k);
	v[0] = 1;
	v[1] = 1;

	while (v[i] < k) {
		i++;
		v[i] = v[i - 1] + v[i - 2];

	}

	while (k > 0) {
		if (v[i] == k) {
			n++;
			k = k - v[i];
		}
		else {
			i--;
			if (k - v[i] > 0) {
				k = k - v[i];
				n++;
			}
		}


	}

	if (k == 0) printf("%d", n);
	else printf("Nu se poate scrie numarul sub forma de suma fibonacci");
	return 0;
}