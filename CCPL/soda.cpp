#include <stdio.h>

using namespace std;

int main() {
  int e, f, c, n;
  scanf("%d", &n);

  while(n--) {
    scanf("%d %d %d", &e, &f, &c);
    int v = e + f;
    int t = 0;
    while (v >= c) {
      int tmp = v / c;
      v = tmp + (v % c);
      t += tmp;
    }
    printf("%d\n", t);
  }

  return 0;
}
