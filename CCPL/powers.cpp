#include <iostream>
#include <cmath>

using namespace std;

void pew(long n) { 
  long potato = sqrt(n);
  for (long i = 2; i <= potato; ++i) {
    double pew = log10(n)/log10(i);
    if (abs(pew - round(pew)) <= 0.0000000001) {
      cout << i << "^" << pew << endl;
      return;
    }
  }
  cout << n << "^1" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  long n;
  while (cin >> n && n != -1) {
    pew(n);
  }
  
}
