#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<ll> sums(n);
  vector<ll> maxs(n);
  sums[0] = a[0];
  for(int i=1;i<n;i++){
    sums[i] = sums[i-1]+a[i];
  }

  maxs[0] = a[0];
  for(int i=1;i<n;i++){
    maxs[i] = max(maxs[i-1], a[i]);
  }

  vector<ll> vs(n+1);
  vs[0] = 0;
  for(int i=1;i<n;i++){
    vs[i] = vs[i-1]+sums[i-1];
  }

  ll s;
  for(int i=0;i<n;i++){
    s = sums[i];
    s += maxs[i]*(i+1)+vs[i];
    cout << s << endl;
  }
}
