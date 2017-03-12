#include <iostream>

using namespace std;

int main() {
  int t, n, num = 0, i = 0, sum = 0, max = 0, votes = 0;
  bool win;
  cin >> t;
  while (t--) {
    win = true;
    cin >> n >> i;
    int pews[n];
    pews[0] = i;
    num = 1;
    sum = i;
    max = num;
    votes = i;
    while (--n) {
      cin >> i;
      pews[num] = i;
      num++;
      sum += i;
      if (i > votes) {
	max = num;
	votes = i;
	win = true;
      } else if (i == votes) {
	win = false;
      }
    }
    if (win) {
      if (votes > sum/2) {
	cout << "majority winner " << max << endl;
      } else {
	cout << "minority winner " << max << endl;
      }
    } else {
      cout << "no winner" << endl;
    }
  }
  
  return 0;
}
