#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	int n = a - 1;
	int m = a - 1;
	for (int i = 0; i < a; i++) {

		for (int j = 0; j <= a * 2 - 1; j++) {
			if (i == (a + 1) / 2 - 1) {
				if (m <= j && j <= n) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else {

				if (j == n || j == m) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}

		}
		n++;
		m--;
		printf("\n");
	}
}

///////////////////


#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int count = 1;
	int di[4] = { 0,1,0,-1 };
	int dj[4] = { 1,0,-1,0 };

	int i = 0;
	int j = 0;
	int val = 0;
	int a[25][25];
	int visited[25][25] = { 0, };

	a[0][0] = count;
	visited[0][0] = 1;
	while (count < n * n) {

		

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

//////////