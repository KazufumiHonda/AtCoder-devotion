#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<ll> s(n),s2(n);
  s[0] = a[0];
  s2[0] = a[0]*a[0];
  for(int i=1;i<n;i++){
    s[i] = s[i-1] + a[i];
    s2[i] = s2[i-1] + a[i]*a[i];
  }

  ll ans = 0;
  for(int i=1;i<n;i++){
    ans += (i)*a[i]*a[i] -2*a[i]*s[i-1] + s2[i-1];
  }

  cout << ans << endl;
}
