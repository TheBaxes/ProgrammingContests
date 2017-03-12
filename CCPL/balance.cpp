typedef long long ll;

#include <iostream>

using namespace std;

ll gcd(ll a, ll b) {
  return b == 0 ? a : gcd(b, a%b);
}

int main() {
  ios::sync_with_stdio(false);
  ll n, a;
  while (cin >> n >> a) {
    ll res = 1;
    for (ll i = 0; i <= a; ++i) {
      res = res*((n-i)/gcd(res,n-i));
    }
    cout << res << endl;
  }
}
