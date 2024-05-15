#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

void knuthShuffle(vector<int>& x) {
  int n = x.size();
  for (int i = n - 1; i > 0; --i) {
    int j = rand() % (i + 1);
    swap(x[i], x[j]);
  }
}

int main() {
  vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  // Seed for random number generation
  srand(time(nullptr));

  knuthShuffle(x);

  cout << "Shuffled: ";
  for (int i = 0; i < x.size(); ++i) {
    cout << x[i] << " ";
  }
  cout << endl;

  return 0;
}
