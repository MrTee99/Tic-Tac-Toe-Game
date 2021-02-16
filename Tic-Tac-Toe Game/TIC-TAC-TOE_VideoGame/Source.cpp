
// TIC-TAC-TOE (Everyting is in main function) v1.00
// TIC-TAC-TOE (Menu 3/5 options updated, gameplay updated) v1.15
// TIC-TAC-TOE (Base Game almost completed got to add toss, colours included, much more improvement in gameplay) v1.20
// TIC-TAC-TOE (Everything completed with menu properly functioning. ADD EXTRAS & OPTIONAL: Change Colours) v1.45

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void BaseGame(void);
void roundgame(int);
void extras(void);

void main(void)
{
Menu:
	cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";

	// MENU
	int Mpress;
	system("color 1F");
	cout << "\n\n\n\t\t     ********#######  MENU  #######********";
	cout << "\n\n\t\t\t\t 1: QUICK PLAY";
	cout << "\n\n\t\t\t\t 2: GAME MODES";
	cout << "\n\n\t\t\t\t 3: HOW TO PLAY";
	cout << "\n\n\t\t\t\t   4: EXTRAS";
	cout << "\n\n\t\t\t\t    5: EXIT";
	cout << "\n\n\n  SELECT YOUR OPTION: ";
	do
	{
		cin >> Mpress;
		if (Mpress == 1)
		{
			// QUICK PLAY RUNS THE BASE GAME
			system("cls");
			BaseGame();
		}
		else if (Mpress == 2)
		{
			// TOURNAMENT MODE
			int mode;		// MODE SELECTION INPUT
			system("color 3F");
			system("cls");
			cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
			cout << "\n\n\n\t\t   ********#######  GAME MODES  #######********";
			cout << "\n\n\t\t\t\t1- 05 ROUNDS GAME";
			cout << "\n\n\t\t\t\t2- 10 ROUNDS GAME";
			cout << "\n\n\t\t\t\t3- 15 ROUNDS GAME";
			cout << "\n\n\t\t\t\t4- 20 ROUNDS GAME";
			cout << "\n\n\t\t\t      5- CUSTOM ROUNDS GAME";
			cout << "\n\n\t\t\t     0- GO BACK TO MAIN MENU";
			cout << "\n\n\n\n\n\n  SELECT YOUR OPTION: ";
			do
			{
				cin >> mode;
				if (mode == 1)
				{
					// 5 ROUND MODE
					system("cls");
					int n = 5;
					roundgame(n);
				}
				else if (mode == 2)
				{
					// 10 ROUND MODE
					system("cls");
					int n = 10;
					roundgame(n);
				}
				else if (mode == 3)
				{
					// 15 ROUND MODE
					system("cls");
					int n = 15;
					roundgame(n);
				}
				else if (mode == 4)
				{
					// 20 ROUND MODE
					system("cls");
					int n = 20;
					roundgame(n);
				}
				else if (mode == 5)
				{
					// CUSTOM ROUND MODE
					system("cls");
					cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
					cout << "\n\n Enter your desired amount of rounds to start the game: ";
					int n;
					cin >> n;
					system("cls");
					roundgame(n);
				}
				else if (mode == 0)
				{
					system("cls");
					goto Menu;
				}
				else
				{
					cout << "\n  INVALID Input!! Please Enter CORRECT OPTION: ";
				}
			} while (mode > 4);
		}
		else if (Mpress == 3)
		{
			// INSTRUCTIONS ABOUT POSITIONS/SLOTS AND HOW TO PLAY
			int menu;			// GO BACK TO MAIN MENU
			system("color 5F");
			system("cls");
			cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
			cout << "\n\n\n\t\t********#######  INSTRUCTIONS  #######********";
			cout << "\n\nHOW TO PLAY: ";
			cout << "\n\n- First of all select your mark (X or O)";
			cout << "\n\n- You have to make either a Diagonal or Vertical or Horizontal line,\n  using your mark";
			cout << "\n\n- Numbers on the table below represents the empty slots";
			cout << "\n\n- Press your desired empty slot number to place your mark";
			cout << "\n\n\t slot[1] | slot[2] | slot[3] \n\t---------|---------|---------\n\t slot[4] | slot[5] | slot[6] \n\t---------|---------|---------\n\t slot[7] | slot[8] | slot[9] \n";
			cout << "\n\n PRESS 0 TO GO BACK TO MAIN MENU: ";
			do
			{
				cin >> menu;
				if (menu == 0)
				{
					system("cls");
					goto Menu;
				}
			} while (menu != 0);
		}
		else if (Mpress == 4)
		{
			// EXTRAS
			system("color 6F");
			int mode, menu;
			system("cls");
			cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
			cout << "\n\n\n\t\t    ********#######  EXTRAS  #######********";
			cout << "\n\n\t\t\t     1- MARK \"X\" PATTERN";
			cout << "\n\n\t\t\t     2- MARK \"O\" PATTERN";
			cout << "\n\n\t\t\t     0- GO BACK TO MAIN MENU";
			cout << "\n\n\n\n\n\n  SELECT YOUR OPTION: ";
			do
			{
				cin >> mode;
				if (mode == 1)
				{
					system("cls");
					cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
					cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\tMARK \" X \" PATTERN";
					cout << "\n\t\t\t\t  COMING SOON!!";
					cout << "\n\n\n\n\n\n\n\n\n\n Press 0 to go back to main menu: ";
					do
					{
						cin >> menu;
						if (menu == 0)
						{
							system("cls");
							goto Menu;
						}

					} while (menu != 0);
				}
				else if (mode == 2)
				{
					system("cls");
					cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
					cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\tMARK \" O \" PATTERN";
					cout << "\n\t\t\t\t  COMING SOON!!";
					cout << "\n\n\n\n\n\n\n\n\n\n Press 0 to go back to main menu: ";
					do
					{
						cin >> menu;
						if (menu == 0)
						{
							system("cls");
							goto Menu;
						}

					} while (menu != 0);
				}
				else if (mode == 0)
				{
					system("cls");
					goto Menu;
				}
				else
				{
					cout << "\n  INVALID Input!! Please Enter CORRECT OPTION: ";
				}
			} while (Mpress > 2);
		}
		else if (Mpress == 5)
		{
			// GAME QUIT
			int menu;		// go to main menu;
			system("color 48");
			system("cls");
			cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
			cout << "\n\n\n\t\t     ********#######  EXIT  #######********";
			cout << "\n\n\n\t\t  - Enter any key twice to Quit the game";
			cout << "\n\t\t  - Enter 0 to go back to Main Menu.";
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t   \" Thank you for playing C++ TIC-TAC-TOE \" ";
			cout << "\n\n\t\t\t \" Developed by TAHIR SAEED \" ";
			cin >> menu;
			if (menu == 0)
			{
				system("cls");
				goto Menu;
			}
			_getch();
		}
		else
		{
			cout << "\n  INVALID Input!! Please Enter CORRECT OPTION: ";
		}
	} while (Mpress > 5);
	_getch();
}

void roundgame(int n)
{
	string p1Name, p2Name;		// PLAYER NAMES
	char option;				// ASKING USER TO SELECT MARK FROM 2 OPTIONS
	char p1, p2;				// SAVED SELECTED MARKS IN IT
	int p1score = 0; // SAVES SCORES OF PLAYER 1 SEPARATELY
	int p2score = 0; // SAVES SCORES OF PLAYER 2 SEPARATELY
	int menu;					// GO TO MAIN MENU

	// WELCOMING & INPUTTING PLAYER NAMES
	cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
	cout << "\n\t\t\t           \" ROUND 1 \" \t\t\t    Score:";
	cout << "\n\t\t\t\t\t\t\t\t Player 1 = 0";
	cout << "\n\t\t\t\t\t\t\t\t Player 2 = 0";

	cout << "\n\n WELCOME TO C++ TIC-TAC-TOE.";
	cout << "\n\n Enter player 1 Name: ";
	cin >> p1Name;
	cout << " Enter player 2 Name: ";
	cin >> p2Name;

	// MARK SELECTION (X OR O) GIVE TO PLAYER 1
	cout << "\n\n " << p1Name << ": Select anyone mark X or O: ";
	do
	{
		cin >> option;
		{
			if (option == 'X' || option == 'x')
			{
				system("cls");
				cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
				cout << "\n\t\t\t           \" ROUND " << 1 << " \" \t\t\t    Score:";
				cout << "\n\t\t\t\t\t\t\t\t " << p1Name << " = 0";
				cout << "\n\t\t\t\t\t\t\t\t " << p2Name << " = 0";
				p1 = 'X';
				p2 = 'O';
				cout << "\n\n " << p1Name << " represents: X";
				cout << "\n " << p2Name << " represents: O";
				cout << "\n\n Available Slots: \n\n\t slot[1] | slot[2] | slot[3] \n\t---------|---------|---------\n\t slot[4] | slot[5] | slot[6] \n\t---------|---------|---------\n\t slot[7] | slot[8] | slot[9] \n";
				break;
			}
			else if (option == 'O' || option == 'o')
			{
				system("cls");
				cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
				cout << "\n\t\t\t           \" ROUND " << 1 << " \" \t\t\t    Score:";
				cout << "\n\t\t\t\t\t\t\t\t " << p1Name << " = 0";
				cout << "\n\t\t\t\t\t\t\t\t " << p2Name << " = 0";
				p1 = 'O';
				p2 = 'X';
				cout << "\n\n " << p1Name << " represents: O";
				cout << "\n " << p2Name << " represents: X";
				cout << "\n\n Available Slots: \n\n\t slot[1] | slot[2] | slot[3] \n\t---------|---------|---------\n\t slot[4] | slot[5] | slot[6] \n\t---------|---------|---------\n\t slot[7] | slot[8] | slot[9] \n";
				break;
			}
			else
			{
				cout << "\n Mark not available. Please select either \" X or O \" only: ";
			}
		}
	} while (option != 'X' || option != 'x' || option != 'O' || option != 'o');

	for (int r = 1; r <= n; r++)
	{
		char pos[9] = { '-', '-', '-', '-', '-', '-', '-', '-', '-' };															  // MARK POSITION TABLE WHICH APPEARS AFTER USER INPUT HIS DESIRED SLOT NUMBER
		string slot[9] = { "Slot[1]", "Slot[2]", "Slot[3]", "Slot[4]", "Slot[5]", "Slot[6]", "Slot[7]", "Slot[8]", "Slot[9]" };   // AVAILABLE SLOTS WHICH CHANGES AS PLAYER INPUT HIS MARKS  
		int p;						// THIS TAKE INPUT WHERE PLAYER WANT TO PLACE HIS MARK FROM THE AVAILABLE SLOTS
		int t1 = 1, t2 = 1;			// TO DISPLAY THE TURN NUMBER OF PLAYER 1 & PLAYER 2



		// BASE GAME WORKING
		for (int c = 1; c <= 10; c++)
		{
			if (c % 2 == 1)
			{
				// SCANNING PLAYER 1's DESIRED SLOT NUMBER WHEN LOOP IS ODD 5/9 TIMES
				if (c <= 9)
				{
					cout << "\n\n " << p1Name << "'s turn # " << t1++ << ". Enter your desired slot number: ";
					do
					{
						cin >> p;
						if (p <= 9)
						{
							pos[p - 1] = p1;
							slot[p - 1] = p1;
							cout << "\n\n\t   " << pos[0] << "   |   " << pos[1] << "   |   " << pos[2] << " \n\t-------|-------|-------\n\t   " << pos[3] << "   |   " << pos[4] << "   |   " << pos[5] << " \n\t-------|-------|-------\n\t   " << pos[6] << "   |   " << pos[7] << "   |   " << pos[8] << " \n";

							// TOP HEADINGS AND STUF BRINGING BACK AFTER CLS
							cout << "\n Press any key to continue to opponent's turn";
							_getch();
							system("cls");
							cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
							cout << "\n\t\t\t           \" ROUND " << r << " \" \t\t\t    Score:";
							cout << "\n\t\t\t\t\t\t\t\t " << p1Name << " = " << p1score;
							cout << "\n\t\t\t\t\t\t\t\t " << p2Name << " = " << p2score;
							cout << "\n\n " << p1Name << " represents: " << p1;
							cout << "\n " << p2Name << " represents: " << p2;

							// UPDATING AVAILABLE SLOTS
							if (slot[p - 1] == "X")
							{
								slot[p - 1] = "   X   ";
								cout << "\n\n Available Slots: \n\n\t " << slot[0] << " | " << slot[1] << " | " << slot[2] << " \n\t---------|---------|---------\n\t " << slot[3] << " | " << slot[4] << " | " << slot[5] << " \n\t---------|---------|---------\n\t " << slot[6] << " | " << slot[7] << " | " << slot[8] << " \n";
							}
							else if (slot[p - 1] == "O")
							{
								slot[p - 1] = "   O   ";
								cout << "\n\n Available Slots: \n\n\t " << slot[0] << " | " << slot[1] << " | " << slot[2] << " \n\t---------|---------|---------\n\t " << slot[3] << " | " << slot[4] << " | " << slot[5] << " \n\t---------|---------|---------\n\t " << slot[6] << " | " << slot[7] << " | " << slot[8] << " \n";
							}
							break;
						}
						else
						{
							cout << " Slot not available. Please choose from available slots: ";
						}
					} while (pos[0] == 'X' || pos[0] == 'O' || pos[1] == 'X' || pos[1] == 'O' || pos[2] == 'X' || pos[2] == 'O' || pos[3] == 'X' || pos[3] == 'O' || pos[4] == 'X' || pos[4] == 'O' || pos[5] == 'X' || pos[5] == 'O' || pos[6] == 'X' || pos[6] == 'O' || pos[7] == 'X' || pos[7] == 'O' || pos[8] == 'X' || pos[8] == 'O');
				}

				// WINNING CONDITIONS FOR PLAYER 1
				if ((pos[0] == p1) && (pos[1] == p1) && (pos[2] == p1) || (pos[3] == p1) && (pos[4] == p1) && (pos[5] == p1) || (pos[6] == p1) && (pos[7] == p1) && (pos[8] == p1) || (pos[0] == p1) && (pos[3] == p1) && (pos[6] == p1) || (pos[1] == p1) && (pos[4] == p1) && (pos[7] == p1) || (pos[2] == p1) && (pos[5] == p1) && (pos[8] == p1) || (pos[0] == p1) && (pos[4] == p1) && (pos[8] == p1) || (pos[2] == p1) && (pos[4] == p1) && (pos[6] == p1))
				{
					p1score = p1score + 1;
					cout << "\n\n\n\n\n\n\t\t     \" " << p1Name << " WITH THE MARK \'" << p1 << "\' WINS ROUND " << r << "\"";
					cout << "\n\n\n Press any key to start next Round.";
					_getch();
					break;
				}

			}
			else
			{
				if (c <= 9)
				{
					// SCANNING PLAYER 2's DESIRED SLOT NUMBER WHEN LOOP IS EVEN 4/9 TIMES
					cout << "\n\n " << p2Name << "'s turn # " << t2++ << ". Enter your desired slot number: ";
					do
					{
						cin >> p;
						if (p <= 9)
						{
							pos[p - 1] = p2;
							slot[p - 1] = p2;
							cout << "\n\n\t   " << pos[0] << "   |   " << pos[1] << "   |   " << pos[2] << " \n\t-------|-------|-------\n\t   " << pos[3] << "   |   " << pos[4] << "   |   " << pos[5] << " \n\t-------|-------|-------\n\t   " << pos[6] << "   |   " << pos[7] << "   |   " << pos[8] << " \n";

							// TOP HEADINGS AND STUF BRINGING BACK AFTER CLS
							cout << "\n Press any key to continue to opponent's turn";
							_getch();
							system("cls");
							cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
							cout << "\n\t\t\t           \" ROUND " << r << " \" \t\t\t    Score:";
							cout << "\n\t\t\t\t\t\t\t\t " << p1Name << " = " << p1score;
							cout << "\n\t\t\t\t\t\t\t\t " << p2Name << " = " << p2score;
							cout << "\n\n " << p1Name << " represents: " << p1;
							cout << "\n " << p2Name << " represents: " << p2;

							// UPDATING AVAILABLE SLOTS
							if (slot[p - 1] == "X")
							{
								slot[p - 1] = "   X   ";
								cout << "\n\n Available Slots: \n\n\t " << slot[0] << " | " << slot[1] << " | " << slot[2] << " \n\t---------|---------|---------\n\t " << slot[3] << " | " << slot[4] << " | " << slot[5] << " \n\t---------|---------|---------\n\t " << slot[6] << " | " << slot[7] << " | " << slot[8] << " \n";
							}
							else if (slot[p - 1] == "O")
							{
								slot[p - 1] = "   O   ";
								cout << "\n\n Available Slots: \n\n\t " << slot[0] << " | " << slot[1] << " | " << slot[2] << " \n\t---------|---------|---------\n\t " << slot[3] << " | " << slot[4] << " | " << slot[5] << " \n\t---------|---------|---------\n\t " << slot[6] << " | " << slot[7] << " | " << slot[8] << " \n";
							}
							break;
						}
						else
						{
							cout << " Slot not available. Please choose from available slots: ";
						}
					} while (pos[0] == 'X' || pos[0] == 'O' || pos[1] == 'X' || pos[1] == 'O' || pos[2] == 'X' || pos[2] == 'O' || pos[3] == 'X' || pos[3] == 'O' || pos[4] == 'X' || pos[4] == 'O' || pos[5] == 'X' || pos[5] == 'O' || pos[6] == 'X' || pos[6] == 'O' || pos[7] == 'X' || pos[7] == 'O' || pos[8] == 'X' || pos[8] == 'O');
				}

				// WINNING CONDITIONS FOR PLAYER 2
				if ((pos[0] == p2) && (pos[1] == p2) && (pos[2] == p2) || (pos[3] == p2) && (pos[4] == p2) && (pos[5] == p2) || (pos[6] == p2) && (pos[7] == p2) && (pos[8] == p2) || (pos[0] == p2) && (pos[3] == p2) && (pos[6] == p2) || (pos[1] == p2) && (pos[4] == p2) && (pos[7] == p2) || (pos[2] == p2) && (pos[5] == p2) && (pos[8] == p2) || (pos[0] == p2) && (pos[4] == p2) && (pos[8] == p2) || (pos[2] == p2) && (pos[4] == p2) && (pos[6] == p2))
				{
					p2score = p2score + 1;
					cout << "\n\n\n\n\n\n\t\t     \" " << p2Name << " WITH THE MARK \'" << p2 << "\' WINS ROUND " << r << "\"";
					cout << "\n\n\n Press any key to start next Round.";
					_getch();
					break;
				}
				// CONDITION IF GAME DRAWS
				else if (c == 10)
				{
					cout << "\n\n\n\n\n\n\n\t\t\t\t \" ROUND " << r << " DRAWS \"";
					cout << "\n\t\t\t \" BOTH PLAYERS WERE OUTSTANDING \"";
					cout << "\n\n\n Press any key to start next Round.";
					_getch();
				}
			}
		}
		// RESETTING EVERYTHING AFTER END OF EACH ROUND
		if (r == n - 1)
		{
			string slotreset[9] = { "Slot[1]", "Slot[2]", "Slot[3]", "Slot[4]", "Slot[5]", "Slot[6]", "Slot[7]", "Slot[8]", "Slot[9]" };   // AVAILABLE SLOTS RESETS AFTER END OF EACH ROUND
			system("cls");
			cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
			cout << "\n\t\t\t           \" ROUND " << r + 1 << " \" \t\t\t    Score:";
			cout << "\n\t\t\t\t\t\t\t\t " << p1Name << " = " << p1score;
			cout << "\n\t\t\t\t\t\t\t\t " << p2Name << " = " << p2score;
			cout << "\n\n " << p1Name << " represents: " << p1;
			cout << "\n " << p2Name << " represents: " << p2;
			cout << "\n\n Available Slots: \n\n\t " << slotreset[0] << " | " << slotreset[1] << " | " << slotreset[2] << " \n\t---------|---------|---------\n\t " << slotreset[3] << " | " << slotreset[4] << " | " << slotreset[5] << " \n\t---------|---------|---------\n\t " << slotreset[6] << " | " << slotreset[7] << " | " << slotreset[8] << " \n";
		}
	}
	// AFTER ROUND COMPLETETION GAME WINNING CONDITIONS
	if (p1score > p2score)
	{
		system("cls");
		cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
		cout << "\n\t\t\t\t\t\t\t\t   Score:";
		cout << "\n\t\t\t\t\t\t\t\t " << p1Name << " = " << p1score;
		cout << "\n\t\t\t\t\t\t\t\t " << p2Name << " = " << p2score;
		cout << "\n\n\t\t\t\"CONGRATULATIONS! " << p1Name << " WINS THE GAME\"";
		cout << "\n\n ENTER 0 TO GO BACK TO MAIN MENU: ";
		do
		{
			cin >> menu;
			if (menu == 0)
			{
				system("cls");
				main();
			}
			else
			{
				cout << "\n  INVALID Input!! Please Enter 0: ";
			}
		} while (menu != 0);
	}
	else if (p1score < p2score)
	{
		system("cls");
		cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
		cout << "\n\t\t\t\t\t\t\t\t   Score:";
		cout << "\n\t\t\t\t\t\t\t\t " << p1Name << " = " << p1score;
		cout << "\n\t\t\t\t\t\t\t\t " << p2Name << " = " << p2score;
		cout << "\n\n\t\t\t\"CONGRATULATIONS! " << p2Name << " WINS THE GAME\"";
		cout << "\n\n ENTER 0 TO GO BACK TO MAIN MENU: ";
		do
		{
			cin >> menu;
			if (menu == 0)
			{
				system("cls");
				main();
			}
			else
			{
				cout << "\n  INVALID Input!! Please Enter 0: ";
			}
		} while (menu != 0);
	}
	else if (p1score = p2score)
	{
		system("cls");
		cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
		cout << "\n\t\t\t\t\t\t\t\t   Score:";
		cout << "\n\t\t\t\t\t\t\t\t " << p1Name << " = " << p1score;
		cout << "\n\t\t\t\t\t\t\t\t " << p2Name << " = " << p2score;
		cout << "\n\n\t\t\t\t \" GAME DRAWS \"";
		cout << "\n\t\t\t \" BOTH PLAYERS WERE OUTSTANDING \"";
		cout << "\n\n ENTER 0 TO GO BACK TO MAIN MENU: ";
		do
		{
			cin >> menu;
			if (menu == 0)
			{
				system("cls");
				main();
			}
			else
			{
				cout << "\n  INVALID Input!! Please Enter 0: ";
			}
		} while (menu != 0);
	}
}

void BaseGame(void)
{
	char pos[9] = { '-', '-', '-', '-', '-', '-', '-', '-', '-' };															  // MARK POSITION TABLE WHICH APPEARS AFTER USER INPUT HIS DESIRED SLOT NUMBER
	string slot[9] = { "Slot[1]", "Slot[2]", "Slot[3]", "Slot[4]", "Slot[5]", "Slot[6]", "Slot[7]", "Slot[8]", "Slot[9]" };   // AVAILABLE SLOTS WHICH CHANGES AS PLAYER INPUT HIS MARKS  
	int p;						// THIS TAKE INPUT WHERE PLAYER WANT TO PLACE HIS MARK FROM THE AVAILABLE SLOTS
	char option;				// ASKING USER TO SELECT MARK FROM 2 OPTIONS
	char p1, p2;				// SAVED SELECTED MARKS IN IT
	string p1Name, p2Name;		// PLAYER NAMES
	int t1 = 1, t2 = 1;			// TO DISPLAY THE TURN NUMBER OF PLAYER 1 & PLAYER 2
	int menu;					// GO TO MAIN MENU

	system("color 2F");
	// WELCOMING & INPUTTING PLAYER NAMES
	cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";

	cout << "\n\n WELCOME TO C++ TIC-TAC-TOE.";
	cout << "\n\n Enter player 1 Name: ";
	cin >> p1Name;
	cout << " Enter player 2 Name: ";
	cin >> p2Name;

	// MARK SELECTION (X OR O) GIVE TO PLAYER 1
	cout << "\n\n " << p1Name << ": Select anyone mark X or O: ";
	do
	{
		cin >> option;
		{
			if (option == 'X' || option == 'x')
			{
				system("cls");
				cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
				p1 = 'X';
				p2 = 'O';
				cout << "\n\n " << p1Name << " represents: X";
				cout << "\n " << p2Name << " represents: O";
				cout << "\n\n Available Slots: \n\n\t slot[1] | slot[2] | slot[3] \n\t---------|---------|---------\n\t slot[4] | slot[5] | slot[6] \n\t---------|---------|---------\n\t slot[7] | slot[8] | slot[9] \n";
				break;
			}
			else if (option == 'O' || option == 'o')
			{
				system("cls");
				cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
				p1 = 'O';
				p2 = 'X';
				cout << "\n\n " << p1Name << " represents: O";
				cout << "\n " << p2Name << " represents: X";
				cout << "\n\n Available Slots: \n\n\t slot[1] | slot[2] | slot[3] \n\t---------|---------|---------\n\t slot[4] | slot[5] | slot[6] \n\t---------|---------|---------\n\t slot[7] | slot[8] | slot[9] \n";
				break;
			}
			else
			{
				cout << "\n Mark not available. Please select either \" X or O \" only: ";
			}
		}
	} while (option != 'X' || option != 'x' || option != 'O' || option != 'o');

	system("color 2F");
	// BASE GAME WORKING
	for (int c = 1; c <= 10; c++)
	{
		if (c % 2 == 1)
		{
			// SCANNING PLAYER 1's DESIRED SLOT NUMBER WHEN LOOP IS ODD 5/9 TIMES
			if (c <= 9)
			{
				cout << "\n\n " << p1Name << "'s turn # " << t1++ << ". Enter your desired slot number: ";
				do
				{
					cin >> p;
					if (p <= 9)
					{
						pos[p - 1] = p1;
						slot[p - 1] = p1;
						cout << "\n\n\t   " << pos[0] << "   |   " << pos[1] << "   |   " << pos[2] << " \n\t-------|-------|-------\n\t   " << pos[3] << "   |   " << pos[4] << "   |   " << pos[5] << " \n\t-------|-------|-------\n\t   " << pos[6] << "   |   " << pos[7] << "   |   " << pos[8] << " \n";

						// TOP HEADINGS AND STUF BRINGING BACK AFTER CLS
						cout << "\n Press any key to continue to opponent's turn";
						_getch();
						system("cls");
						cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
						cout << "\n\n " << p1Name << " represents: " << p1;
						cout << "\n " << p2Name << " represents: " << p2;

						// UPDATING AVAILABLE SLOTS
						if (slot[p - 1] == "X")
						{
							slot[p - 1] = "   X   ";
							cout << "\n\n Available Slots: \n\n\t " << slot[0] << " | " << slot[1] << " | " << slot[2] << " \n\t---------|---------|---------\n\t " << slot[3] << " | " << slot[4] << " | " << slot[5] << " \n\t---------|---------|---------\n\t " << slot[6] << " | " << slot[7] << " | " << slot[8] << " \n";
						}
						else if (slot[p - 1] == "O")
						{
							slot[p - 1] = "   O   ";
							cout << "\n\n Available Slots: \n\n\t " << slot[0] << " | " << slot[1] << " | " << slot[2] << " \n\t---------|---------|---------\n\t " << slot[3] << " | " << slot[4] << " | " << slot[5] << " \n\t---------|---------|---------\n\t " << slot[6] << " | " << slot[7] << " | " << slot[8] << " \n";
						}
						break;
					}
					else
					{
						cout << " Slot not available. Please choose from available slots: ";
					}
				} while (pos[0] == 'X' || pos[0] == 'O' || pos[1] == 'X' || pos[1] == 'O' || pos[2] == 'X' || pos[2] == 'O' || pos[3] == 'X' || pos[3] == 'O' || pos[4] == 'X' || pos[4] == 'O' || pos[5] == 'X' || pos[5] == 'O' || pos[6] == 'X' || pos[6] == 'O' || pos[7] == 'X' || pos[7] == 'O' || pos[8] == 'X' || pos[8] == 'O');
			}

			// WINNING CONDITIONS FOR PLAYER 1
			if ((pos[0] == p1) && (pos[1] == p1) && (pos[2] == p1) || (pos[3] == p1) && (pos[4] == p1) && (pos[5] == p1) || (pos[6] == p1) && (pos[7] == p1) && (pos[8] == p1) || (pos[0] == p1) && (pos[3] == p1) && (pos[6] == p1) || (pos[1] == p1) && (pos[4] == p1) && (pos[7] == p1) || (pos[2] == p1) && (pos[5] == p1) && (pos[8] == p1) || (pos[0] == p1) && (pos[4] == p1) && (pos[8] == p1) || (pos[2] == p1) && (pos[4] == p1) && (pos[6] == p1))
			{
				cout << "\n\n\n\n\n\n\t\t\t \" " << p1Name << " WITH THE MARK \'" << p1 << "\' WINS \"";
				cout << "\n\n ENTER 0 TO GO BACK TO MAIN MENU: ";
				do
				{
					cin >> menu;
					if (menu == 0)
					{
						system("cls");
						main();
					}
					else
					{
						cout << "\n  INVALID Input!! Please Enter 0: ";
					}
				} while (menu != 0);
				break;
			}

		}
		else
		{
			if (c <= 9)
			{
				// SCANNING PLAYER 2's DESIRED SLOT NUMBER WHEN LOOP IS EVEN 4/9 TIMES
				cout << "\n\n " << p2Name << "'s turn # " << t2++ << ". Enter your desired slot number: ";
				do
				{
					cin >> p;
					if (p <= 9)
					{
						pos[p - 1] = p2;
						slot[p - 1] = p2;
						cout << "\n\n\t   " << pos[0] << "   |   " << pos[1] << "   |   " << pos[2] << " \n\t-------|-------|-------\n\t   " << pos[3] << "   |   " << pos[4] << "   |   " << pos[5] << " \n\t-------|-------|-------\n\t   " << pos[6] << "   |   " << pos[7] << "   |   " << pos[8] << " \n";

						// TOP HEADINGS AND STUF BRINGING BACK AFTER CLS
						cout << "\n Press any key to continue to opponent's turn";
						_getch();
						system("cls");
						cout << "\n\t\t\t       \" C++ TIC-TAC-TOE \"";
						cout << "\n\n " << p1Name << " represents: " << p1;
						cout << "\n " << p2Name << " represents: " << p2;

						// UPDATING AVAILABLE SLOTS
						if (slot[p - 1] == "X")
						{
							slot[p - 1] = "   X   ";
							cout << "\n\n Available Slots: \n\n\t " << slot[0] << " | " << slot[1] << " | " << slot[2] << " \n\t---------|---------|---------\n\t " << slot[3] << " | " << slot[4] << " | " << slot[5] << " \n\t---------|---------|---------\n\t " << slot[6] << " | " << slot[7] << " | " << slot[8] << " \n";
						}
						else if (slot[p - 1] == "O")
						{
							slot[p - 1] = "   O   ";
							cout << "\n\n Available Slots: \n\n\t " << slot[0] << " | " << slot[1] << " | " << slot[2] << " \n\t---------|---------|---------\n\t " << slot[3] << " | " << slot[4] << " | " << slot[5] << " \n\t---------|---------|---------\n\t " << slot[6] << " | " << slot[7] << " | " << slot[8] << " \n";
						}
						break;
					}
					else
					{
						cout << " Slot not available. Please choose from available slots: ";
					}
				} while (pos[0] == 'X' || pos[0] == 'O' || pos[1] == 'X' || pos[1] == 'O' || pos[2] == 'X' || pos[2] == 'O' || pos[3] == 'X' || pos[3] == 'O' || pos[4] == 'X' || pos[4] == 'O' || pos[5] == 'X' || pos[5] == 'O' || pos[6] == 'X' || pos[6] == 'O' || pos[7] == 'X' || pos[7] == 'O' || pos[8] == 'X' || pos[8] == 'O');
			}

			// WINNING CONDITIONS FOR PLAYER 2
			if ((pos[0] == p2) && (pos[1] == p2) && (pos[2] == p2) || (pos[3] == p2) && (pos[4] == p2) && (pos[5] == p2) || (pos[6] == p2) && (pos[7] == p2) && (pos[8] == p2) || (pos[0] == p2) && (pos[3] == p2) && (pos[6] == p2) || (pos[1] == p2) && (pos[4] == p2) && (pos[7] == p2) || (pos[2] == p2) && (pos[5] == p2) && (pos[8] == p2) || (pos[0] == p2) && (pos[4] == p2) && (pos[8] == p2) || (pos[2] == p2) && (pos[4] == p2) && (pos[6] == p2))
			{
				cout << "\n\n\n\n\n\n\t\t\t \" " << p2Name << " WITH THE MARK \'" << p2 << "\' WINS \"";
				cout << "\n\n ENTER 0 TO GO BACK TO MAIN MENU: ";
				do
				{
					cin >> menu;
					if (menu == 0)
					{
						system("cls");
						main();
					}
					else
					{
						cout << "\n  INVALID Input!! Please Enter 0: ";
					}
				} while (menu != 0);
				break;
			}
			// CONDITION IF GAME DRAWS
			else if (c == 10)
			{
				cout << "\n\n\n\n\n\n\n\t\t\t\t \" GAME DRAWS \"";
				cout << "\n\t\t\t \" BOTH PLAYERS WERE OUTSTANDING \"";
				cout << "\n\n ENTER 0 TO GO BACK TO MAIN MENU: ";
				do
				{
					cin >> menu;
					if (menu == 0)
					{
						system("cls");
						main();
					}
					else
					{
						cout << "\n  INVALID Input!! Please Enter 0: ";
					}
				} while (menu != 0);
			}
		}
	}
}

void extras(void)
{
	int r, c, s, s1 = 6;
	cout << "\n\n";
	for (r = 1; r <= 5; r++)
	{
		cout << "\t";
		for (s = 2; s <= r; s++)
		{
			cout << "   ";
		}
		for (c = 1; c <= 12; c++)
		{
			if (r == 5 && c == 6 || r == 5 && c == 5)
				cout << "** ";
			else if (c <= 3 && r != 5 && c != 6 || c <= 3 && r != 5 && c != 5)
				cout << "** ";
		}
		for (s = s1; s >= 1; s--)
		{
			cout << "   ";
		}
		s1 -= 2;
		for (c = 1; c <= 12; c++)
		{
			if (r == 5 && c == 7 || r == 5 && c == 8 || r != 5 && c == 9)
				cout << "** ";
			else if (c>9 && c<12 && r != 5)
				cout << "** ";
		}
		cout << endl;
	}
	/*
	c1 c2 c3 c4 c5 c6c7 c8 c9 10 11 12

	R1	** ** **				  ** ** **
	R2	   ** ** **			   ** ** **
	R3	      ** ** **		** ** **
	R4		     ** ** **** ** **
	R5			    ** **** **

	R6			 ** ** **** ** **
	R7		  ** ** **      ** ** **
	R8	   ** ** **			   ** ** **
	R9	** ** **				  ** ** **
	*/
}