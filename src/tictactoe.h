/* Useful defines */
const int TRUE = 1;
const int FALSE=0;

/* Board */
const int HUMAN = -1;
const int COMPUTER = 1;
const int NONE = 0;
const int DRAW = -2;

/* IPC messages */
const int MSG_GAME_OVER = 1;
const int MSG_CONTINUE = 0;

typedef struct TicTacToe {
	int size; // this is the size of the game board
	int **board;	// this is the game board
	int winner; // who won
} TicTacToe;
