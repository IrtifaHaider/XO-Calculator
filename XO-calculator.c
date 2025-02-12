#include <stdio.h>
#include <stdlib.h>

/**
 * @file CrisscrossCalculator.c
 * @brief A simple C program that allows users to play Tic-Tac-Toe (CrissCross Game) or use a basic calculator.
 */

// Global Variables for Tic-Tac-Toe
#define SIZE 3 // Size of the Tic-Tac-Toe board (3x3)
char board[SIZE][SIZE] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}}; // Represents the Tic-Tac-Toe board
char current_marker; // Current marker ('X' or 'O') for the player's move
int current_player; // Current player (1 or 2)

// Function Declarations
void drawBoard();
int checkWin();
void playGame();
void calculator();
void calculatorMenu();

/**
 * @brief Draws the Tic-Tac-Toe board.
 * 
 * This function prints the current state of the Tic-Tac-Toe board to the console.
 * The board is displayed in a 3x3 grid format with separators between cells.
 */
void drawBoard() {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) printf("---|---|---\n");
    }
    printf("\n");
}

/**
 * @brief Checks if there is a winner in the Tic-Tac-Toe game.
 * 
 * This function checks all possible winning conditions for the Tic-Tac-Toe game:
 * - Rows, columns, and diagonals must have the same marker ('X' or 'O').
 * 
 * @return 1 if there is a winner, otherwise 0.
 */
int checkWin() {
    // Check rows and columns for a win
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    // Check diagonals for a win
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;
    return 0;
}

/**
 * @brief Manages the Tic-Tac-Toe game logic.
 * 
 * This function handles the main game loop for Tic-Tac-Toe. It alternates between
 * Player 1 and Player 2, allowing them to make moves on the board. The game ends
 * when a player wins or the board is full (draw).
 */
void playGame() {
    int choice, row, col;
    current_player = 1; // Start with Player 1
    current_marker = 'X'; // Player 1 uses 'X'
    for (int turn = 0; turn < 9; turn++) {
        drawBoard();
        printf("Player %d, enter a number (1-9): ", current_player);
        scanf("%d", &choice);
        row = (choice - 1) / SIZE; // Calculate row index from user input
        col = (choice - 1) % SIZE; // Calculate column index from user input
        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Invalid move! Try again.\n");
            turn--; // Decrement turn counter to retry the move
            continue;
        }
        board[row][col] = current_marker; // Place the marker on the board
        if (checkWin()) {
            drawBoard();
            printf("Player %d wins!\n", current_player);
            return; // End the game if a player wins
        }
        current_player = (current_player == 1) ? 2 : 1; // Switch players
        current_marker = (current_marker == 'X') ? 'O' : 'X'; // Switch markers
    }
    drawBoard();
    printf("It's a draw!\n"); // End the game if the board is full
}

/**
 * @brief Implements a simple calculator that allows users to choose an operation.
 * 
 * This function provides a basic calculator with four operations: addition, subtraction,
 * multiplication, and division. The user selects an operation and inputs two numbers,
 * and the result is displayed.
 */
void calculator() {
    double num1, num2, result;
    int choice;
    
    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    printf("Enter first numbers: ");
    scanf("%lf", &num1);
    printf("Enter second numbers: ");
    scanf("%lf", &num2);
    
    switch (choice) {
        case 1: 
            result = num1 + num2; 
            printf("Result: %.2lf\n", result); 
            break;
        case 2: 
            result = num1 - num2; 
            printf("Result: %.2lf\n", result); 
            break;
        case 3: 
            result = num1 * num2; 
            printf("Result: %.2lf\n", result); 
            break;
        case 4: 
            if (num2 == 0) {
                printf("Error! Division by zero.\n");
                return;
            }
            result = num1 / num2; 
            printf("Result: %.2lf\n", result);
            break;
        default: 
            printf("Invalid choice!\n");
    }
}

/**
 * @brief Main function that presents a menu to the user.
 * 
 * This function displays a menu to the user, allowing them to choose between playing
 * Tic-Tac-Toe, using the calculator, or exiting the program. The menu loops until
 * the user chooses to exit.
 * 
 * @return int Program exit status (0 for successful execution).
 */
int main() {
    int choice;
    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Play CrissCross Game (Tic-Tac-Toe)\n");
        printf("2. Use Calculator\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                playGame(); 
                break;
            case 2: 
                calculator(); 
                break;
            case 3: 
                exit(0); // Exit the program
            default: 
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}