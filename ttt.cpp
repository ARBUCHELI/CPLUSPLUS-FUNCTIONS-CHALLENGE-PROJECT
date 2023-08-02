#include <iostream>
#include <vector>

 bool winner = false;
  char symbol;
  int x;
  int y;

   char board[3][3] = {
    {'_', '_', '_'},
    {'_', '_', '_'},
    {'_', '_', '_'}
  };

void introduction() {
  std::cout << "WELCOME TO TIC-TAC-TOE\n";
  std::cout << "======================\n";
  std::cout << "*Player A will use O**\n";
  std::cout << "*Player B will use X**\n";
}

void print_board() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << board[i][j] << " ";
    }
    std::cout << "\n";
  }
}

bool winner_exist() {
  if ((board[0][0] == 'O' &&  board[0][1] == 'O' && board[0][2] == 'O') || (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') || (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') || (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') || (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') || (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') || (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') || (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')) {
    winner = true;
    std::cout << "Player A is the winner!!!\n";
  }
  else if ((board[0][0] == 'X' &&  board[0][1] == 'X' && board[0][2] == 'X') || (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') || (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') || (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') || (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') || (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') || (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')) {
    winner = true;
    std::cout << "Player B is the winner!!!\n";
    return winner;
  }
} 

void take_turn() {
  int counter = 0;
  while (winner == false) {
    std::cout << "Please Enter the symbol and the coordinates: \n";
    std::cout << "\n";
    std::cout << "Enter the symbol: \n";
    std::cin >> symbol;
    std::cout << "Enter the file: \n";
    std::cin >> x;
      std::cout << "Enter the column: \n";
      std::cin >> y;
      board[x][y] = symbol;
      print_board();
      std::cout << "\n";
      winner_exist();
      counter++;
      if (counter == 9 && winner_exist() == false) {
        std::cout << "The game ended up in draw\n";
        winner = true;
      }
  }
}

int main() {
  introduction();
  std::cout << "\n";
  print_board();
  std::cout << "\n";
  take_turn();
}