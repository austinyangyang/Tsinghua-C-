#include<iostream>
#include<cstdlib>

using namespace std;

enum GameStatus { WIN, LOSE, PLAYING};

int rollDice()
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = 0;

	sum = die1 + die2;

	cout << "played rolled " << die1 << "+" <<  die2 << " = " << sum << endl;
	
	return  sum;
}

int main()
{
	int seed = 0;
	int sum = 0;
	int Status = 0;
	int myPoint = 0;
	cin >> seed;
	
	srand(seed);
	
	sum = rollDice();

	switch (sum)
	{
		case 7:  Status = WIN;
			break;
		case 11: Status = WIN;
			break;
		case 2:
		case 3:
		case 12: Status = LOSE;
			break;
		default: Status = PLAYING;
			myPoint = sum;
			cout << "point is " << myPoint << endl;
			break;
	}

	while (Status == PLAYING)
	{
		sum == rollDice();

		if (sum == myPoint)
		{
			Status = WIN;
		}
		else if (sum == 7)
		{
			Status = LOSE;
		}
		else {
			Status = PLAYING;

		}

		if (Status == WIN)
		{
			cout << "we are win " << endl;
			
		}
		else {
			cout << "we are lose " << endl;
		}
	}


	return 0;
}