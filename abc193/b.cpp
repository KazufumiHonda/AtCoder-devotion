#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main() {
  int n;
  cin >> n;
  vector<ll> a(n), p(n), x(n);
  for(int i=0;i<n;i++) cin >> a[i] >> p[i] >> x[i];

  ll ans = 1e9+1;
  bool f = true;

  for(int i=0;i<n;i++) {
    if(a[i] < x[i]){
      ans = min(ans, p[i]);
      f = false;
    }
  }

  if(f) cout << -1 << endl;
  else cout << ans << endl;
}

