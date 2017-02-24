#include<iostream>

using namespace std;

int main(void)
{
	int i = 0; 
	int j = 0;
	int k = 0;
	int n = 0;

	cin >> n;

	for (i = 1; i <= n; i++)
	{
		//cout << "\t";
		for (j = 1; j <=(n - i); j++)
		{
            cout << " ";
		}

		for (k = 1; k <= (2 * i - 1 ) ; k++)
		{
			cout << "*";

		}
		cout << endl;
	}

	for (i = 1; i <=n - 1; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (k = 1; k <= (n - i) * 2 -1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}