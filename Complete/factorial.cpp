#include<iostream>

using namespace std;
// n �Ľ׳�
int factorial(int n)
{
	int f;
	if (n == 0)
		f = 1;
	else
		f = factorial(n - 1)*n;   // ע��(*n)
	
	return f;
}

int main()
{
	int n;
	int fac = 0;
	cout << "input number n " << endl;

	cin >> n;

	fac = factorial(n);

	cout << "output fac = " << fac << endl;

	return 0;

}