#include <stdio.h>
#include <stdlib.h>
#include <queue>
using namespace std;

int main(){
  long long actual, last, length;
  while(scanf("%lld %lld", &length, &last) != EOF){
    priority_queue<long long> q;
    for(long long i = 0; i < length - 1; ++i){
      scanf("%lld", &actual);
      q.push(abs(last - actual));
      last = actual;
    }
    long long cont = length - 1;
    bool is = true;
    while(!q.empty()){
      long long t = q.top();q.pop();
      if(t != cont){
	is = false;
      } 
      cont--;
    }
    if(is){
      printf("Jolly\n");
    }else{
      printf("Not jolly\n");
    }
  }
  return 0;
}
