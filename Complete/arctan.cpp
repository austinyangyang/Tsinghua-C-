#include<iostream>

using namespace std;

const double TIN_VALUE = 1e-15;


double arctan(double x)
{
	double sqr = x * x;
	double e = x;

	double r = 0;

	int i = 1;
	while (e/i > TIN_VALUE)
	{
		double f = e / i;
		r = (i % 4 == 1) ? r + f : r - f;			//i = 23 以后大于4 重新回到3 5 7 9
		e = e * sqr;
		i += 2;
		cout << i << endl;

	}
	return r;
}


int main()
{
	

	double a = 16 * arctan(1 / 5.0);
	double b = 4.0 *arctan(1 / 235.0);

	double c = 1 / 5.0;
	cout << "Pi = " << c << endl;


//	cout << 1 % 4 << endl;
	
	return 0;
}