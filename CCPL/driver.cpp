#include <iostream>
#include <queue>

using namespace std;

int main() {
  priority_queue<int> morning, night;
  int n, d, r;
  ios::sync_with_stdio(false);
  while(cin >> n >> d >> r && (n || d || r)) {
    int pew;
    for (int i = 0; i < n; ++i) {
      cin >> pew;
      morning.push(d - pew);
    }
    for (int i = 0; i < n; ++i) {
      cin >> pew;
      night.push(pew);
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
      int total = night.top() - morning.top();
      morning.pop(); night.pop();
      if (total > 0) sum += total;
    }
    cout << sum*r << endl;
  }

  return 0;
}
