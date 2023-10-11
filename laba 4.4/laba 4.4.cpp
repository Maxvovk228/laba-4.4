#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y, R;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -2)
			y = x + 3;
		else
			if (-2 < x && x <= 4)
				y = ((-R * x) / 6.0) - (R / 3.0) - (x / 6.0) + 2.0 / 3;
			else
				if (4 < x && x <= 8 - R)
					y = -R;
				else
					if (8 - R < x && x <= 8 + R)
						y = sqrt(R * R - x * x + 16 * x - 64) - R;
					else
						y = -R;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}