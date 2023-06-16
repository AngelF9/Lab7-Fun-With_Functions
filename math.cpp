/** Implementation for a few math operations.
@file math.cpp
@author Angel Fuentes
*/

#include <iostream>
using namespace std;

int power(int x, int n) {
  if (n < 0) {
    return 0;
  }

  int res = 1;
  for (int i = 1; i <= n; i++) {
    res *= x;
  }
  
  return res;
}

int nth_root(int x, int n) {
  if (n <= 0 || x < 0) {
    return -1;
  }

  int i = 0;
  while (power(i, n) <= x) {
    i++;
  }

  return i - 1;
}

int dist(int x1, int y1, int x2, int y2) {
  int dx = x2 - x1;
  if (dx < 0) {
    dx *= -1;
  }
  int dy = y2 - y1;
  if (dy < 0) {
    dy *= -1;
  }
  return dx + dy;
}
