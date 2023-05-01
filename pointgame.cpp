#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <locale.h>


using namespace std;

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Portuguese");

	//lines variables (30)
	string l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16, l17, l18, l19, l20, l21, l22, l23, l24, l25, l26, l27, l28, l29, l30;

	//columns variables(30)
	string c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30;
	
	//squares variables(25);
	bool s1 = false, s2 = false, s3 = false, s4 = false, s5 = false, s6 = false, s7 = false, s8 = false, s9 = false, s10 = false, s11 = false;
	bool s12 = false, s13 = false, s14 = false, s15 = false, s16 = false, s17 = false, s18 = false, s19 = false, s20 = false, s21 = false;
	bool s22 = false, s23 = false, s24 = false, s25 = false;

	//player variables
	string curPlayer;
	string player1 = "1", player2 = "2";
	string playerChoice;
	int player1Points = 0, player2Points = 0;
	bool getPlayer = true;
	
	//game variables
	string playSelect;
	string play;
	bool playAgain = false;
	bool validePlay = false;
	

	do
	{
		cout << "Escolha quem começará jogando(1 ou 2)\n";
		cin >> playerChoice;
		if (playerChoice == "1") {
			getPlayer = false;
		}
		else if (playerChoice == "2") {
			getPlayer = false;
		}
	} while (getPlayer);

	if (playerChoice == "1") {
		curPlayer = player1;
	}
	else if (playerChoice == "2") {
		curPlayer = player2;
	}
	 
	//loop that runs the game logic
	while (true)
	{
		cout << "\t\t\t\t----- PLACAR -----\n";
		cout << "\t\t\t----- PLAYER 1: " << player1Points << "   PLAYER 2: " << player2Points << "-----\n";
		cout << "\nVez do jogador " << curPlayer << "\n\n";

		if (playAgain) {
			cout << "\nJogada inválida ou coluna/linha já preenchida, jogue novamente.\n";
		}

		//primary board
		cout << "O" << "\t" << l1 << "\t" << "O" << "\t" << l2 << "\t" << "O" << "\t" << l3 << "\t" << "O" << "\t" << l4 << "\t" << "O" << "\t" << l5 << "\t" << "O" << "\t" << "\n";
		cout << c1 << "\t\t" << c2 << "\t\t" << c3 << "\t\t" << c4 << "\t\t" << c5 << "\t\t" << c6 << "\t\t" << "\n";
		cout << "O" << "\t" << l6 << "\t" << "O" << "\t" << l7 << "\t" << "O" << "\t" << l8 << "\t" << "O" << "\t" << l9 << "\t" << "O" << "\t" << l10 << "\t" << "O" << "\t" << "\n";
		cout << c7 << "\t\t" << c8 << "\t\t" << c9 << "\t\t" << c10 << "\t\t" << c11 << "\t\t" << c12 << "\t\t" << "\n";
		cout << "O" << "\t" << l11 << "\t" << "O" << "\t" << l12 << "\t" << "O" << "\t" << l13 << "\t" << "O" << "\t" << l14 << "\t" << "O" << "\t" << l15 << "\t" << "O" << "\t" << "\n";
		cout << c13 << "\t\t" << c14 << "\t\t" << c15 << "\t\t" << c16 << "\t\t" << c17 << "\t\t" << c18 << "\t\t" << "\n";
		cout << "O" << "\t" << l16 << "\t" << "O" << "\t" << l17 << "\t" << "O" << "\t" << l18 << "\t" << "O" << "\t" << l19 << "\t" << "O" << "\t" << l20 << "\t" << "O" << "\t" << "\n";
		cout << c19 << "\t\t" << c20 << "\t\t" << c21 << "\t\t" << c22 << "\t\t" << c23 << "\t\t" << c24 << "\t\t" << "\n";
		cout << "O" << "\t" << l21 << "\t" << "O" << "\t" << l22 << "\t" << "O" << "\t" << l23 << "\t" << "O" << "\t" << l24 << "\t" << "O" << "\t" << l25 << "\t" << "O" << "\t" << "\n";
		cout << c25 << "\t\t" << c26 << "\t\t" << c27 << "\t\t" << c28 << "\t\t" << c29 << "\t\t" << c30 << "\t\t" << "\n";
		cout << "O" << "\t" << l26 << "\t" << "O" << "\t" << l27 << "\t" << "O" << "\t" << l28 << "\t" << "O" << "\t" << l29 << "\t" << "O" << "\t" << l30 << "\t" << "O" << "\t" << "\n";

		cout << "\nDeseja jogar uma coluna 'c' ou linha 'l'?\n";
		cin >> playSelect;

		//verify the type of the play and verify if the line/column is already filled
		if (playSelect == "c") {
			validePlay = true;
			playAgain = false;
			if (c1 != "|") {
				c1 = "c1";
			}
			if (c2 != "|") {
				c2 = "c2";
			}
			if (c3 != "|") {
				c3 = "c3";
			}
			if (c4 != "|") {
				c4 = "c4";
			}
			if (c5 != "|") {
				c5 = "c5";
			}
			if (c6 != "|") {
				c6 = "c6";
			}
			if (c7 != "|") {
				c7 = "c7";
			}
			if (c8 != "|") {
				c8 = "c8";
			}
			if (c9 != "|") {
				c9 = "c9";
			}
			if (c10 != "|") {
				c10 = "c10";
			}
			if (c11 != "|") {
				c11 = "c11";
			}
			if (c12 != "|") {
				c12 = "c12";
			}
			if (c13 != "|") {
				c13 = "c13";
			}
			if (c14 != "|") {
				c14 = "c14";
			}
			if (c15 != "|") {
				c15 = "c15";
			}
			if (c16 != "|") {
				c16 = "c16";
			}
			if (c17 != "|") {
				c17 = "c17";
			}
			if (c18 != "|") {
				c18 = "c18";
			}
			if (c19 != "|") {
				c19 = "c19";
			}
			if (c20 != "|") {
				c20 = "c20";
			}
			if (c21 != "|") {
				c21 = "c21";
			}
			if (c22 != "|") {
				c22 = "c22";
			}
			if (c23 != "|") {
				c23 = "c23";
			}
			if (c24 != "|") {
				c24 = "c24";
			}
			if (c25 != "|") {
				c25 = "c25";
			}
			if (c26 != "|") {
				c26 = "c26";
			}
			if (c27 != "|") {
				c27 = "c27";
			}
			if (c28 != "|") {
				c28 = "c28";
			}
			if (c29 != "|") {
				c29 = "c29";
			}
			if (c30 != "|") {
				c30 = "c30";
			}
		}
		else if (playSelect == "l") {
			validePlay = true;
			playAgain = false;
			if (l1 != "-") {
				l1 = "l1";
			}
			if (l2 != "-") {
				l2 = "l2";
			}
			if (l3 != "-") {
				l3 = "l3";
			}
			if (l4 != "-") {
				l4 = "l4";
			}
			if (l5 != "-") {
				l5 = "l5";
			}
			if (l6 != "-") {
				l6 = "l6";
			}
			if (l7 != "-") {
				l7 = "l7";
			}
			if (l8 != "-") {
				l8 = "l8";
			}
			if (l9 != "-") {
				l9 = "l9";
			}
			if (l10 != "-") {
				l10 = "l10";
			}
			if (l11 != "-") {
				l11 = "l11";
			}
			if (l12 != "-") {
				l12 = "l12";
			}
			if (l13 != "-") {
				l13 = "l13";
			}
			if (l14 != "-") {
				l14 = "l14";
			}
			if (l15 != "-") {
				l15 = "l15";
			}
			if (l16 != "-") {
				l16 = "l16";
			}
			if (l17 != "-") {
				l17 = "l17";
			}
			if (l18 != "-") {
				l18 = "l18";
			}
			if (l19 != "-") {
				l19 = "l19";
			}
			if (l20 != "-") {
				l20 = "l20";
			}
			if (l21 != "-") {
				l21 = "l21";
			}
			if (l22 != "-") {
				l22 = "l22";
			}
			if (l23 != "-") {
				l23 = "l23";
			}
			if (l24 != "-") {
				l24 = "l24";
			}
			if (l25 != "-") {
				l25 = "l25";
			}
			if (l26 != "-") {
				l26 = "l26";
			}
			if (l27 != "-") {
				l27 = "l27";
			}
			if (l28 != "-") {
				l28 = "l28";
			}
			if (l29 != "-") {
				l29 = "l29";
			}
			if (l30 != "-") {
				l30 = "l30";
			}
		}

		(playSelect == "c") ? cout << "\n\nJogue uma COLUNA" << ":\n\n" : cout << "\n\nJogue uma LINHA" << ":\n\n";

		//reply the board with the columns or lines
		cout << "O" << "\t" << l1 << "\t" << "O" << "\t" << l2 << "\t" << "O" << "\t" << l3 << "\t" << "O" << "\t" << l4 << "\t" << "O" << "\t" << l5 << "\t" << "O" << "\t" << "\n";
		cout << c1 << "\t\t" << c2 << "\t\t" << c3 << "\t\t" << c4 << "\t\t" << c5 << "\t\t" << c6 << "\t\t" << "\n";
		cout << "O" << "\t" << l6 << "\t" << "O" << "\t" << l7 << "\t" << "O" << "\t" << l8 << "\t" << "O" << "\t" << l9 << "\t" << "O" << "\t" << l10 << "\t" << "O" << "\t" << "\n";
		cout << c7 << "\t\t" << c8 << "\t\t" << c9 << "\t\t" << c10 << "\t\t" << c11 << "\t\t" << c12 << "\t\t" << "\n";
		cout << "O" << "\t" << l11 << "\t" << "O" << "\t" << l12 << "\t" << "O" << "\t" << l13 << "\t" << "O" << "\t" << l14 << "\t" << "O" << "\t" << l15 << "\t" << "O" << "\t" << "\n";
		cout << c13 << "\t\t" << c14 << "\t\t" << c15 << "\t\t" << c16 << "\t\t" << c17 << "\t\t" << c18 << "\t\t" << "\n";
		cout << "O" << "\t" << l16 << "\t" << "O" << "\t" << l17 << "\t" << "O" << "\t" << l18 << "\t" << "O" << "\t" << l19 << "\t" << "O" << "\t" << l20 << "\t" << "O" << "\t" << "\n";
		cout << c19 << "\t\t" << c20 << "\t\t" << c21 << "\t\t" << c22 << "\t\t" << c23 << "\t\t" << c24 << "\t\t" << "\n";
		cout << "O" << "\t" << l21 << "\t" << "O" << "\t" << l22 << "\t" << "O" << "\t" << l23 << "\t" << "O" << "\t" << l24 << "\t" << "O" << "\t" << l25 << "\t" << "O" << "\t" << "\n";
		cout << c25 << "\t\t" << c26 << "\t\t" << c27 << "\t\t" << c28 << "\t\t" << c29 << "\t\t" << c30 << "\t\t" << "\n";
		cout << "O" << "\t" << l26 << "\t" << "O" << "\t" << l27 << "\t" << "O" << "\t" << l28 << "\t" << "O" << "\t" << l29 << "\t" << "O" << "\t" << l30 << "\t" << "O" << "\t" << "\n";

		if (validePlay) {		
			cin >> play;
		}

		//switchs the column / line with the current player
		//COLUMNS
		if (play == "c1") {
			if (c1 != "|") {
				c1 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c2") {
			if (c2 != "|") {
				c2 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c3") {
			if (c3 != "|") {
				c3 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c4") {
			if (c4 != "|") {
				c4 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c5") {
			if (c5 != "|") {
				c5 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c6") {
			if (c6 != "|") {
				c6 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c7") {
			if (c7 != "|") {
				c7 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c8") {
			if (c8 != "|") {
				c8 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c9") {
			if (c9 != "|") {
				c9 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c10") {
			if (c10 != "|") {
				c10 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c11") {
			if (c11 != "|") {
				c11 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c12") {
			if (c12 != "|") {
				c12 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c13") {
			if (c13 != "|") {
				c13 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c14") {
			if (c14 != "|") {
				c14 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c15") {
			if (c15 != "|") {
				c15 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c16") {
			if (c16 != "|") {
				c16 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c17") {
			if (c17 != "|") {
				c17 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c18") {
			if (c18 != "|") {
				c18 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c19") {
			if (c19 != "|") {
				c19 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c20") {
			if (c20 != "|") {
				c20 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c21") {
			if (c21 != "|") {
				c21 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c22") {
			if (c22 != "|") {
				c22 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c23") {
			if (c23 != "|") {
				c23 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c24") {
			if (c24 != "|") {
				c24 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c25") {
			if (c25 != "|") {
				c25 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c26") {
			if (c26 != "|") {
				c26 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c27") {
			if (c27 != "|") {
				c27 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c28") {
			if (c28 != "|") {
				c28 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c29") {
			if (c29 != "|") {
				c29 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "c30") {
			if (c30 != "|") {
				c30 = "|";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}


		//------
		//LINES
		else if (play == "l1") {
			if (l1 != "-") {
				l1 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l2") {
			if (l2 != "-") {
				l2 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l3") {
			if (l3 != "-") {
				l3 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l4") {
			if (l4 != "-") {
				l4 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l5") {
			if (l5 != "-") {
				l5 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l6") {
			if (l6 != "-") {
				l6 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l7") {
			if (l7 != "-") {
				l7 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l8") {
			if (l8 != "-") {
				l8 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l9") {
			if (l9 != "-") {
				l9 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l10") {
			if (l10 != "-") {
				l10 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l11") {
			if (l11 != "-") {
				l11 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l12") {
			if (l12 != "-") {
				l12 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l13") {
			if (l13 != "-") {
				l13 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l14") {
			if (l14 != "-") {
				l14 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l15") {
			if (l15 != "-") {
				l15 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l16") {
			if (l16 != "-") {
				l16 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l17") {
			if (l17 != "-") {
				l17 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l18") {
			if (l18 != "-") {
				l18 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l19") {
			if (l19 != "-") {
				l19 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l20") {
			if (l20 != "-") {
				l20 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l21") {
			if (l21 != "-") {
				l21 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l22") {
			if (l22 != "-") {
				l22 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l23") {
			if (l23 != "-") {
				l23 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l24") {
			if (l24 != "-") {
				l24 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l25") {
			if (l25 != "-") {
				l25 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l26") {
			if (l26 != "-") {
				l26 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l27") {
			if (l27 != "-") {
				l27 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l28") {
			if (l28 != "-") {
				l28 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l29") {
			if (l29 != "-") {
				l29 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else if (play == "l30") {
			if (l30 != "-") {
				l30 = "-";
				playAgain = false;
			}
			else {
				playAgain = true;
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
			}
		}
		else {
			playAgain = true;
			if (curPlayer == "1") {
				curPlayer = "2";
			}
			else {
				curPlayer = "1";
			}
		}


		//verify if its formed a square and give points
		if (!s1) {
			if (l1 == "-" && l6 == "-" && c1 == "|" && c2 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}

				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}

				s1 = true;
			}
		}

		if (!s2) {
			if (l2 == "-" && l7 == "-" && c2 == "|" && c3 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}

				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s2 = true;
			}
		}

		if (!s3) {
			if (l3 == "-" && l8 == "-" && c3 == "|" && c4 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s3 = true;
			}
		}

		if (!s4) {
			if (l4 == "-" && l9 == "-" && c4 == "|" && c5 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s4 = true;
			}
		}

		if (!s5) {
			if (l5 == "-" && l10 == "-" && c5 == "|" && c6 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s5 = true;
			}
		}

		if (!s6) {

			if (l6 == "-" && l11 == "-" && c7 == "|" && c8 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s6 = true;

			}
		}

		if (!s7) {

			if (l7 == "-" && l12 == "-" && c8 == "|" && c9 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s7 = true;
			}
		}

		if (!s8) {

			if (l8 == "-" && l13 == "-" && c9 == "|" && c10 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s8 = true;
			}
		}

		if (!s9) {
			if (l9 == "-" && l14 == "-" && c10 == "|" && c11 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s9 = true;
			}
		}

		if (!s10) {
			if (l10 == "-" && l15 == "-" && c11 == "|" && c12 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s10 = true;
			}
		}

		if (!s11) {

			if (l11 == "-" && l16 == "-" && c13 == "|" && c14 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s11 = true;
			}
		}

		if (!s12) {

			if (l12 == "-" && l17 == "-" && c14 == "|" && c15 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s12 = true;
			}
		}

		if (!s13) {

			if (l13 == "-" && l18 == "-" && c15 == "|" && c16 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s13 = true;

			}
		}

		if(!s14){
			if (l14 == "-" && l19 == "-" && c16 == "|" && c17 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s14 = true;
			}
		}

		if (!s15) {

			if (l15 == "-" && l20 == "-" && c17 == "|" && c18 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s15 = true;
			}
		}

		if (!s16) {

			if (l16 == "-" && l21 == "-" && c19 == "|" && c20 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s16 = true;
			}
		}

		if (!s17) {

			if (l17 == "-" && l22 == "-" && c20 == "|" && c21 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s17 = true;
			}
		}

		if (!s18) {

			if (l18 == "-" && l23 == "-" && c21 == "|" && c22 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s18 = true;
			}
		}

		if (!s19) {

			if (l19 == "-" && l24 == "-" && c22 == "|" && c23 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s19 = true;
			}
		}

		if (!s20) {
			if (l20 == "-" && l25 == "-" && c23 == "|" && c24 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s20 = true;
			}
		}

		if (!s21) {

			if (l21 == "-" && l26 == "-" && c25 == "|" && c26 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s21 = true;
			}
		}

		if(!s22){

			if (l22 == "-" && l27 == "-" && c26 == "|" && c27 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s22 = true;
			}
		}

		if (!s23) {

			if (l23 == "-" && l28 == "-" && c27 == "|" && c28 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s23 = true;
			}
		}

		if (!s24) {

			if (l24 == "-" && l29 == "-" && c28 == "|" && c29 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s24 = true;
			}
		}

		if (!s25) {
			if (l25 == "-" && l30 == "-" && c29 == "|" && c30 == "|") {
				if (curPlayer == "1") {
					player1Points++;
				}
				else {
					player2Points++;
				}
				if (curPlayer == "1") {
					curPlayer = "2";
				}
				else {
					curPlayer = "1";
				}
				s25 = true;
			}
		}


		//verify if all columns and lines are filled and announce the winner and ends the game
		if (c1 == "|" && c2 == "|" && c3 == "|" && c4 == "|" && c5 == "|" && c6 == "|" && c7 == "|" && c8 == "|" && c9 == "|" && c10 == "|" && c11 == "|" &&
			c12 == "|" && c13 == "|" && c14 == "|" && c15 == "|" && c16 == "|" && c17 == "|" && c18 == "|" && c19 == "|" && c20 == "|" && c21 == "|" && c22 == "|" &&
			c23 == "|" && c24 == "|" && c25 == "|" && c26 == "|" && c27 == "|" && c28 == "|" && c29 == "|" && c30 == "|" &&

			l1 == "-" && l2 == "-" && l3 == "-" && l4 == "-" && l5 == "-" && l6 == "-" && l7 == "-" && l8 == "-" && l9 == "-" && l10 == "-" &&
			l11 == "-" && l12 == "-" && l13 == "-" && l14 == "-" && l15 == "-" && l16 == "-" && l17 == "-" && l18 == "-" && l19 == "-" && l20 == "-" &&
			l21 == "-" && l22 == "-" && l23 == "-" && l24 == "-" && l25 == "-" && l26 == "-" && l27 == "-" && l28 == "-" && l29 == "-" && l30 == "-"
			) {

			if (player1Points > player2Points) {
				cout << "\nPARABÉNS JOGADOR 1, VOCÊ VENCEU COM " << player1Points;
				cout << endl;
	cout << "     **  " << endl;
	cout << "    *__*  "  << endl;
	cout << "  *|    |*  "  << endl;
	cout << " (_|    |_) " << endl;
	cout << "    *  *   " << endl;
	cout << "     )(   " << endl;
	cout << "   _|__|_ " << endl;
	cout << " _|______|_ " << endl;
	cout <<"|__________|" << endl;
	cout<< endl;
	cout<<endl;
			}
			else {
				cout << "\nPARABÉNS JOGADOR 2, VOCÊ VENCEU COM " << player2Points;
				cout << endl;
			cout << endl;
	cout << "     **  " << endl;
	cout << "    *__*  "  << endl;
	cout << "  *|    |*  "  << endl;
	cout << " (_|    |_) " << endl;
	cout << "    *  *   " << endl;
	cout << "     )(   " << endl;
	cout << "   _|__|_ " << endl;
	cout << " _|______|_ " << endl;
	cout <<"|__________|" << endl;
	cout<< endl;
	cout<<endl;
			}

			system("pause");
			return 0;


		}


		//reset the values of the columns and lines that it is not filled
		//columns
		if (c1 != "|") {
			c1 = "";
		}
		if (c2 != "|") {
			c2 = "";
		}
		if (c3 != "|") {
			c3 = "";
		}
		if (c4 != "|") {
			c4 = "";
		}
		if (c5 != "|") {
			c5 = "";
		}
		if (c6 != "|") {
			c6 = "";
		}
		if (c7 != "|") {
			c7 = "";
		}
		if (c8 != "|") {
			c8 = "";
		}
		if (c9 != "|") {
			c9 = "";
		}
		if (c10 != "|") {
			c10 = "";
		}
		if (c11 != "|") {
			c11 = "";
		}
		if (c12 != "|") {
			c12 = "";
		}
		if (c13 != "|") {
			c13 = "";
		}
		if (c14 != "|") {
			c14 = "";
		}
		if (c15 != "|") {
			c15 = "";
		}
		if (c16 != "|") {
			c16 = "";
		}
		if (c17 != "|") {
			c17 = "";
		}
		if (c18 != "|") {
			c18 = "";
		}
		if (c19 != "|") {
			c19 = "";
		}
		if (c20 != "|") {
			c20 = "";
		}
		if (c21 != "|") {
			c21 = "";
		}
		if (c22 != "|") {
			c22 = "";
		}
		if (c23 != "|") {
			c23 = "";
		}
		if (c24 != "|") {
			c24 = "";
		}
		if (c25 != "|") {
			c25 = "";
		}
		if (c26 != "|") {
			c26 = "";
		}
		if (c27 != "|") {
			c27 = "";
		}
		if (c28 != "|") {
			c28 = "";
		}
		if (c29 != "|") {
			c29 = "";
		}
		if (c30 != "|") {
			c30 = "";
		}

		//-------
		//lines
		if (l1 != "-") {
			l1 = "";
		}
		if (l2 != "-") {
			l2 = "";
		}
		if (l3 != "-") {
			l3 = "";
		}
		if (l4 != "-") {
			l4 = "";
		}
		if (l5 != "-") {
			l5 = "";
		}
		if (l6 != "-") {
			l6 = "";
		}
		if (l7 != "-") {
			l7 = "";
		}
		if (l8 != "-") {
			l8 = "";
		}
		if (l9 != "-") {
			l9 = "";
		}
		if (l10 != "-") {
			l10 = "";
		}
		if (l11 != "-") {
			l11 = "";
		}
		if (l12 != "-") {
			l12 = "";
		}
		if (l13 != "-") {
			l13 = "";
		}
		if (l14 != "-") {
			l14 = "";
		}
		if (l15 != "-") {
			l15 = "";
		}
		if (l16 != "-") {
			l16 = "";
		}
		if (l17 != "-") {
			l17 = "";
		}
		if (l18 != "-") {
			l18 = "";
		}
		if (l19 != "-") {
			l19 = "";
		}
		if (l20 != "-") {
			l20 = "";
		}
		if (l21 != "-") {
			l21 = "";
		}
		if (l22 != "-") {
			l22 = "";
		}
		if (l23 != "-") {
			l23 = "";
		}
		if (l24 != "-") {
			l24 = "";
		}
		if (l25 != "-") {
			l25 = "";
		}
		if (l26 != "-") {
			l26 = "";
		}
		if (l27 != "-") {
			l27 = "";
		}
		if (l28 != "-") {
			l28 = "";
		}
		if (l29 != "-") {
			l29 = "";
		}
		if (l30 != "-") {
			l30 = "";
		}



		//switchs the player
		if (curPlayer == "1") {
			curPlayer = "2";
		}
		else {
			curPlayer = "1";
		}

		validePlay = false;
		system("cls");

	}
	
	return 0;
}