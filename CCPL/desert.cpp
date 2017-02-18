#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
  double f = 0, last = 0, leak = 0, actual = 0, tmp = 0;
  double min = 0, wf = 0;
  string status, trump;
  
  while (true) {
    cin >> actual >> status;
    tmp = actual - last;
    last = actual;
    wf += tmp/100 * f + leak * tmp;
    if (status == "Fuel") {
      cin >> trump;
      cin >> f;
      if (!(actual || f)) break;
    } else if (status == "Leak") leak++;
    else if (status == "Gas") {
      cin >> trump;
      if (wf > min) min = wf;
      wf = 0;
    } else if (status == "Mechanic") {
      leak = 0;
    }
    if (status == "Goal") {
      if (wf > min) min = wf;
      printf("%.3f\n", min);
      min = 0; wf = 0;
      f = 0; last = 0; leak = 0; actual = 0; tmp = 0;
    }
  }


  return 0;
}
