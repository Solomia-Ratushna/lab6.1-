#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}

int Sum(int* a, const int size)
{
	int S = 0;

	for (int i = 0; i < size; i++)
	{
		
			if ((a[i] % 2 == 0) && (a[i] > 0))
				S += a[i];
		}
	return S;
}
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int t = 10;
	int a[t];
	double* p = new double[t];
	int Low = -5;
	int High = 12;
	Create(a, t, Low, High);
	Print(a, t);

	cout << "S = " << Sum(a, t) << endl;
	return 0;
}