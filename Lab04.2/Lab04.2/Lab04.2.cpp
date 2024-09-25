#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 2 * abs(x - 5);
		if (x < -1) {
			B = pow(sin(x), 2) / (1 + abs(cos(x)));
		}
		else if (x >= -1 && x <= 1) {
			B = pow(cos(x), 2) * (1 / abs(x + 2));
		}
		else if (x > 1) {
			B = log(abs(x + 2));
		}
		y = A - B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
