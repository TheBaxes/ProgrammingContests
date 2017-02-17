#include <iostream>
using namespace std;

int main(){
  int v, t, d;
  std::ios::sync_with_stdio(false);
  while(cin >> v >> t){
    d = 2 * v * t;
    cout << d << endl;
  }
  return 0;
}
