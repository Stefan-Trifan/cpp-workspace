#include <iostream>
using namespace std;

void combinar(int a[], int len_a, int b[], int len_b, int c[]);

int main()
{
	int a[]   = {1, 3, 5, 7, 9};
	int len_a = sizeof(a) / sizeof(a[0]);
	printf("len %d\n", len_a);

	int b[]   = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 30, 40, 50, 60, 70, 80, 90, 100, 200};
	int len_b = sizeof(b) / sizeof(b[0]);
	printf("len %d\n", len_b);

	int c[len_a + len_b];
	int len_c = sizeof(c) / sizeof(c[0]);

	combinar(a, len_a, b, len_b, c);

	for (int i = 0; i < len_c; i++)
	{
		printf("c[%d] = %d\n", i, c[i]);
	}
}

void combinar(int a[], int len_a, int b[], int len_b, int c[])
{
	int i_a = 0;
	int i_b = 0;
	// Añadir código que permite combinar dos arrays
	for (int i = 0; i < len_a + len_b; i++)
	{
		if ((i_a < len_a && a[i_a] <= b[i_b]) || i_b == len_b)
		{
			c[i] = a[i_a];
			i_a++;
		}
		else if ((i_b < len_b && b[i_b] <= a[i_a]) || i_a == len_a)
		{
			c[i] = b[i_b];
			i_b++;
		}
	}
}