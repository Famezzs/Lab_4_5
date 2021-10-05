// Lab_4_5.cpp
// Козубенко Андрій
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 10
#include <iostream>
#include <time.h>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
	double x, y, a, b, R, A, B;
	
	srand((unsigned)time(NULL));
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "R = "; cin >> R;

	A = (-1.) * max({ a, b, R});
    B = max({ a, b, R });

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((x <= 0 && y <= 0 && y >= -b && x * x + y * y <= R * R) || (y >= 0 && y <= b && x <= a && x * x + y * y >= R * R))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	cout << endl << fixed;
	
	for (int i = 0; i < 10; i++)
	{
		x = 2. * B * rand() / RAND_MAX + A;
		y = 2. * B * rand() / RAND_MAX + A;

		if ((x <= 0 && y <= 0 && y >= -b && x * x + y * y <= R * R) || (y >= 0 && y <= b && x <= a && x * x + y * y >= R * R))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "Yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "No" << endl;
	}
	
	return 0;
}