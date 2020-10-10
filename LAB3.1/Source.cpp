#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;
	 
	cout << "x= "; cin >> x;

	//Спосіб 1

	A = 2 + fabs(5 - x); 

		if (x <= -1)
			B = exp(fabs(2 + x));
		if (-1 < x && x < 1)
			B = sin(1 / (fabs(2 + x))) * sin(1 / (fabs(2 + x)));
		if (x >= 1)
			B = cos(x) * cos(x) / 1 + fabs(sin(x));

		y = A + B;
		cout << endl;
		cout << "1)y= " << y << endl;

		//Спосіб 2

		if (x<= -1)
			exp(fabs(2 + x));
		else 
			if (-1 < x && x < 1)
				B = sin(1 / (fabs(2 + x))) * sin(1 / (fabs(2 + x)));
			else
					B = cos(x) * cos(x) / 1 + fabs(sin(x));
					
		y = A + B;

		cout << "2)y= " << y << endl;

		cin.get();
		return 0;
				
}