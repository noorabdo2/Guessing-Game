#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	

	int choice;
	int correctchoice;
	

	srand(time(0));

	correctchoice = rand() % 101;

	cout << "this is a small game where you can guess a number to win a big prize by Nour" << endl << "the correct number is between 0-100" << endl << "goodluck :3" << endl;
	again:
	cout << "entre your guess: ";
	cin >> choice;
	
	if ( choice == correctchoice ) {
		cout << "correct YEYEYEYEYEYYE GOOD JOB, you are so smart. i'm sure that you tried 60 times before hit the correct answer hahahaha" << endl;
	}
	else if ( choice > correctchoice ) {
		cout << "your guess is larger than the random number" << endl << "try again" << endl;
		goto again;
	}
	else if ( choice < correctchoice ) {
		cout << "your guess is lower than the random number" << endl << "try again" << endl;
		goto again;
	}
	
	

	system("pause");

	return 0;
}