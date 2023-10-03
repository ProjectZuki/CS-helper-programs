/// @brief This program calculates the sum of the first n terms of the series
/// using the recurrence relation
/// t_n = (n-1) + (2/n) * sum

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double n = 1000000.0;
  double sum = 0.0;
  double t_n = 0.0;

  for (double i = 2; i <= n; i++) {
    t_n = i - 1 + (2 / i) * sum;
    if (static_cast<int>(i) % 10000 == 0) {
        // cout << setfill(' ');
        cout << "n: " << left << setw(10) << static_cast<int>(i) << " t_n: " << setprecision(4) << fixed << setw(15) << t_n << endl;
    }
    sum += t_n;
  }
  return 0;
}