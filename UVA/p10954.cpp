#include <stdio.h>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main(){
  int n;
  while(scanf("%d", &n) != EOF && n){
    priority_queue<int, vector<int>, greater<int> > q;
    for(int i = 0; i < n; ++i){
      int k;
      scanf("%d", &k);
      q.push(k);
    }
    int tmp, op1, op2;
    int r = 0;
    while(!q.empty()){
      op1 = q.top(); q.pop();
      op2 = q.top(); q.pop();
      tmp = op1 + op2;
      r += tmp;
      if(!q.empty())q.push(tmp);
    }
    printf("%d\n", r);
  }

  return 0;
}
