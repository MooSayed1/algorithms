
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char A, char B, char C) {
  if (n == 0) {
    return;
  }
  towerOfHanoi(n - 1, A, C, B);
  cout << "Move disk " << n << " from " << A << " to " << B << endl;
  towerOfHanoi(n - 1, C, B, A);
}

int main() {
  int N = 3;

  towerOfHanoi(N, 'A', 'C', 'B');
  return 0;
}
