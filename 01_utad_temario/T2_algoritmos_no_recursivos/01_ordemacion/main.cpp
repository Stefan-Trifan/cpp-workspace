/*
    Autor
    Stefan Trifan
*/

// using namespace std;
#include <iostream>

int main()
{
    int n = 5;
    int list[] = {5, 2, 3, 1, 4};

    for(int i = 0; i < n - 1; i++)
    {
        int menor = list[i];
        int menor_id = i;
        for(int j = i + 1; j < n; j++)
        {
            if(list[i] < list[j])
            {
                menor = list[j];
                menor_id = j;
            }
        }
        list[menor_id] = list[i];
        list[i] = menor;
    }

    return 0;
}

