#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void guessresult();
int main() {
	cout << "Welcome to \" NUMBER GUESSING GAME\" !!\n";
	cout << "The number is between 0 and 20\n";
	guessresult();
	cout << "Thank you for playing !!" << endl;
	cout << "Let us see you again\n";
	return 0;
}
	void guessresult()
		 {
		srand(time(NULL));
		int x = rand() % (20 - 0 + 1) + 0;
		int ans;
		int choise;
		while (true)
		{
			cout << "Guess the number :\n";
			cin >> ans;
			if (ans > x)
				cout << "Too high\n";
			else if (ans < x) cout << "Too low\n";
			else if (ans == x) {
				cout << "congratulations!!\n";
				cout << "you guessed it right !!\n";
				break;
			}

		}
		cout << "the game has ended\n";
		cout << "would you like to play again ?\n";
		cout << "1-Yes\t" << "2-No" << endl;
		cin >> choise;
		switch (choise) {
		case 1:
			guessresult();
			break;
		case 2:
			break;
		default: break;
		}
	}
