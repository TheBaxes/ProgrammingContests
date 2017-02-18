#include <iostream>

using namespace std;

int main() {
  int t, a, a2;
  cin >> t;
  bool test;
  
  while(t--) {
    cin >> a;
    test = 1;
    for (int i = 0; i < 4; ++i) {
      cin >> a2;
      if (!(a2 - a) || a2 - a > 1 ) {
	test = 0;
      }
      a = a2;
    }
    if(test) cout << "Y" << endl;
    else cout << "N" << endl;
  }

  return 0;
}
