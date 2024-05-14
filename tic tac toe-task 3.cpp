#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 3;

void displayBoard(vector<vector<char>>& board) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

void playerInput(vector<vector<char>>& board, char player) {
	int row, col;
	cout << "Player " << player << ", enter your move (row and column): ";
	cin >> row >> col;
	if (board[row][col] != ' ') {
		cout << "Invalid move, try again." << endl;
		playerInput(board, player);
	}
	else {
		board[row][col] = player;
	}
}

bool checkForWin(vector<vector<char>>& board, char player) {
	// Check rows and columns
	for (int i = 0; i < SIZE; i++) {
		if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
			return true;
		}
		if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
			return true;
		}
	}
	// Check diagonals
	if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
		(board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
		return true;
	}
	return false;
}

bool checkForDraw(vector<vector<char>>& board) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (board[i][j] == ' ') {
				return false;
			}
		}
	}
	return true;
}

int main() {
	vector<vector<char>> board(SIZE, vector<char>(SIZE, ' '));
	char currentPlayer = 'X';
	int moves = 0;

	while (true) {
		displayBoard(board);
		playerInput(board, currentPlayer);
		moves++;

		if (checkForWin(board, currentPlayer)) {
			displayBoard(board);
			cout << "Player " << currentPlayer << " wins!" << endl;
			break;
		}
		else if (checkForDraw(board)) {
			displayBoard(board);
			cout << "It's a draw!" << endl;
			break;
		}

		currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
	}

	cout << "Play again? (y/n): ";
	char playAgain;
	cin >> playAgain;
	if (playAgain == 'y') {
		main();
	}

	return 0;
}