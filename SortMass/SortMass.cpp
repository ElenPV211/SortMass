#include <iostream>
using namespace	std;

int main()
{
	setlocale(0, "");
	const int size = 5;
	int	a[size], n = 0;
	int i, j, x;
	// �� ����������
	cout << "������� ������� ������: \n";
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
				cout << j << " ������ " << " �������� " << a[j - 1] << " ������ " << j + 1
					<< "-�� �������� " << a[j];
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
				cout << "\n ������ ������ �������, ������ " << a[j - 1] << " ���������� " << j << "-�� ������ "
					<< a[j] << " ���������� " << j + 1 << endl;
			}

		}
	}
	// ����� ����������
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << "  ";
	}

	return 0;
}
