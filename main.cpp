#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;


char name[20];
int balance, balanceadd, balancered;
int dicec, dice;
int choice;
char choice1;
int bet;
int winnings;


void menu() {
	cout << "Welcome to the Casino Odelia!!" << endl;
	cout << "The rules are simple." << endl;
	cout << "Roll the dice, win a prize!!" << endl;
	cout << "Your bet will be multiplied by 3 if you win!!" << endl;
	cout << "Press 1 to add balance." << endl;
	cout << "Press 2 to roll." << endl;
	cout << "Press 3 to withdraw." << endl;
	cout << "Press 4 to check your current balance.\n\n\n" << endl;
	cout << "Press 5 to exit.\n\n\n" << endl;
}


int main()
{

	cout << "Welcome to the Casino Odelia!!" << endl;
	cout << "Please type in your name." << endl;
	cin.getline(name, 20);
	system("cls");
	cout << "Get ready to win some cash, " << name << "!!\n\n" << endl;
	srand(time(0));
	do {
		menu();
		cout << "Please make a choice: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "Please type in the amaount you want to add: " << endl;
			cin >> balanceadd;
			balance += balanceadd;
			cout << "Your balance is: " << balance << endl;
			cout << "Do you want to continue? y or n" << endl;
			cin >> choice1;
			break;

		}
		case 2:
		{

			cout << "How much do you want to bet? " << endl;
			cin >> bet;

			if (balance >= bet)
			{

				dice = rand() % 10 + 1;
				cout << "You rolled " << dice << endl;
				dicec = rand() % 10 + 1;
				cout << "The computer has rolled: " << dicec << endl;
				if (dice == dicec)
				{
					winnings = bet * 3;
					balance += winnings;
					cout << "Congratulations you won " << winnings << "!!" << endl;
					cout << "Do you want to continue? y or n" << endl;
					cin >> choice1;
				}
				else
				{
					balance -= bet;
					cout << "Sorry you lose!" << endl;
					cout << "Do you want to continue? y or n" << endl;
					cin >> choice1;
				}
				break;
			}


			else {
				cout << "Sorry you do not have enough cash to play!" << endl;
				cout << "Do you want to continue? y or n" << endl;
				cin >> choice1;
				break;

			}

		}
		case 3:
		{
			cout << "Please type in the amount you want to withdraw: " << endl;
			cin >> balancered;
			cout << balancered << " was withdrawn succesfully!!" << endl;
			cout << "The amount of " << balancered << " was deposited to your bank!!" << endl;
			balance -= balancered;
			cout << "Your remaining balance is: " << balance << endl;
			cout << "Do you want to continue? y or n" << endl;
			cin >> choice1;
			break;
		}
		case 4:
		{
			cout << "Your current balance is: " << balance << endl;
			cout << "Do you want to continue? y or n" << endl;
			cin >> choice1;
			break;
		}
		case 5:
		{
			cout << "Thanks for playing with us " << name << "!!!" << endl;
			cout << "Come back soon!" << endl;
			break;
		}
		}

	} while (choice != 5 && choice1 != 'n');

	if (choice1 == 'n')
	{
		cout << "Thanks for playing with us " << name << "!!!" << endl;
		}





	return 0;
}