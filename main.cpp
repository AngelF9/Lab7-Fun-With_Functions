/**
Interactive way to run the functions implemented in math.cpp
Do not change anything in this file.

@file main.cpp
@author Hong Tai Wei
*/

#include <iostream>
#include "math.h"
using namespace std;

// Prints a prompt and returns a user's int input.
int get_input(string var) {
  int x;
  cout << "Enter a value for " << var << ":" << endl;
  cin >> x;
  return x;
}

// Performs math operations based on user input.
int main() {
  while (true) {
    cout << "Enter an operation (power, root, dist, help, quit):" << endl;
    string op;
    cin >> op;

    if (op == "power") {
      int x = get_input("x");
      int n = get_input("n");
      cout << "x to the nth power is: " << power(x, n) << endl;
    } else if (op == "root") {
      int x = get_input("x");
      int n = get_input("n");
      cout << "The nth root of x is: " << nth_root(x, n) << endl;
    } else if (op == "dist") {
      int x1 = get_input("x1");
      int y1 = get_input("y1");
      int x2 = get_input("x2");
      int y2 = get_input("y2");
      cout << "The Manhattan distance between (" << x1 << ", " << y1
           << ") and (" << x2 << ", " << y2 << ") is: " << dist(x1, y1, x2, y2)
           << endl;
    } else if (op == "quit") {
      cout << "Goodbye!" << endl;
      break;
    } else if (op == "help") {
      cout << "power: calculates x to the nth power" << endl;
      cout << "root: calculates the integer nth root of x" << endl;
      cout << "dist: calculates the Manhattan distance between (x1, y1) and "
              "(x2, y2)"
           << endl;
      cout << "help: displays this help message" << endl;
      cout << "quit: quits this program" << endl;
    } else {
      cout << "Invalid operation. Try again." << endl;
    }
  }
  return 0;
}
