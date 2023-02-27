#include <iostream>
using namespace	std;

int main()
{
	setlocale(0, "");
	const int size = 5;
	int	a[size], n = 0;
	int i, j, x;
	// до сортировки
	cout << "Введите радиусы оладий: \n";
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	cout << "\n";

	for (i = 0; i < size + 1; i++)
	{
		for (j = size - 1; j > i; j--)

		{
			if (a[j - 1] > a[j])
			{
				cout << j << " оладий " << " радиусом " << a[j - 1] << " больше " << j + 1
					<< "-го радиусом " << a[j];
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
				cout << "\n меняем оладьи местами, радиус " << a[j - 1] << " становится " << j << "-ым радиус "
					<< a[j] << " становится " << j + 1 << endl;
			}

		}
	}
	// после сортировки
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << "  ";
	}

	return 0;
}
