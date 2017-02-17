#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  long long n1, n2, result;
  std::ios::sync_with_stdio(false);
  while(cin >> n1 >> n2){
    result = abs(n1 - n2);
    
    cout << result << endl;
    
  }
  return 0;
}
