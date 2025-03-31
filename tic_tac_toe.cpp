#include <iostream>
#include <vector>
#include <cstdlib> 
using namespace std;

// ANSI color codes
const string RED    = "\033[1;31m";
const string BLUE   = "\033[1;34m";
const string RESET  = "\033[0m";

// Function to initialize the board
void initializeBoard(vector<vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to print the decorative header
void printHeader() {
    cout << "=====================================\n";
    cout << "           TIC TAC TOE\n";
    cout << "=====================================\n\n";
}

// Function to print the board with enhanced visuals
void printBoard(const vector<vector<char>>& board) {
    // Clear the screen (platform dependent: "cls" for Windows, "clear" for Unix)
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printHeader();
    // Print column headers
    cout << "    0   1   2\n";
    for (int i = 0; i < 3; i++) {
        cout << "  -------------\n";
        cout << i << " |";
        for (int j = 0; j < 3; j++) {
            // Set color based on player
            if(board[i][j] == 'X')
                cout << " " << RED << board[i][j] << RESET << " |";
            else if(board[i][j] == 'O')
                cout << " " << BLUE << board[i][j] << RESET << " |";
            else
                cout << " " << board[i][j] << " |";
        }
        cout << "\n";
    }
    cout << "  -------------\n\n";
}

// Function to check for a win
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
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

// Function to check for a draw
bool checkDraw(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false; // Empty space found, game is not a draw
            }
        }
    }
    return true; // No empty spaces, game is a draw
}

// Main function
int main() {
    vector<vector<char>> board(3, vector<char>(3));
    initializeBoard(board);
    
    char currentPlayer = 'X';
    int row, col;
    
    while (true) {
        printBoard(board);
        cout << "Player " << (currentPlayer == 'X' ? RED + "X" + RESET : BLUE + "O" + RESET) 
             << ", enter your move (row and column): ";
        cin >> row >> col;

        // Check for valid input
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move, try again.\n";
            // Pause briefly so the player can read the message
            cin.ignore();
            cin.get();
            continue;
        }

        board[row][col] = currentPlayer;

        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << (currentPlayer == 'X' ? RED + "X" + RESET : BLUE + "O" + RESET) << " wins!\n";
            break;
        }

        if (checkDraw(board)) {
            printBoard(board);
            cout << "The game is a draw!\n";
            break;
        }

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
