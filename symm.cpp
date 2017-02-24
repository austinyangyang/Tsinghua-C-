#include<iostream>

using namespace std;

int symm(int n)
{
	int i = n;
	int m = 0;
	int cont = 0;
	while (i > 0)
	{
		m = m * 10 + i % 10;
		i /= 10;
		cont++;
	}
	cout << "cont" << cont << endl;
	return m == n;

}

int main()
{
	/*
	for (int i = 11; i < 1000; i++)
	{
		if (symm(i) && symm(i * i) && symm(i * i * i))
		{
			cout << i << endl;
			cout << i *i << endl;
			cout << i * i * i << endl;
		}
	}
	
*/
	symm(233);
	
	return 0;
}