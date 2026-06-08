#include <iostream>
#include <cstring>

using namespace std;

void combinar(int a[], int len_a, int b[], int len_b, int c[]);
void MergeSort(int x[], int len);

int main()
{
	int n;
	cin >> n;
	int *x = new int[n];
	for (int i = 0; i < n; i++)
    {
		cin >> x[i];
    }
	MergeSort(x, n);
}

void MergeSort(int x[], int len)
{
	int temp[len];

	if (len == 1) // caso base
	{
		return;
	}
	else
	{
        // Instanciar 2 mitades
        int l_len = len / 2;
        int r_len = len - len / 2;

        int left[l_len];
        int right[r_len];

        // Dividir en 2 mitades
        int i;
        for(i = 0; i < l_len; i++)
        {
            left[i] = x[i];
            // printf("<- %d\n", left[i]);
        }
        for(int j = 0; j < r_len; j++)
        {
            right[j] = x[i];
            i++;
            // printf("-> %d\n", right[j]);
        }

		// Ordenar dos mitades
        MergeSort(left, l_len);
        MergeSort(right, r_len);

        // Combinar ambas mitades y guardarlo dentro de temp
        combinar(left, l_len, right, r_len, temp);

		// Copiar del array temporal al array resultado
        for (int k = 0; k < len; k++)
		{
			x[k] = temp[k];
			cout << x[k] << " ";
		}
		cout << endl;
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

