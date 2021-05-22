#include <iostream>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<int> a(n),b(n),c(n);
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n;i++) cin >> b[i];
  for(int i=0;i<n;i++) cin >> c[i];

  map<int,ll> mp;
  for(int j=0;j<n;j++){
    int bb = b[c[j]-1];
    if(mp.find(bb) == mp.end()){
      mp.insert(make_pair(bb,1));
    }else{
      mp[bb]++;
    }
  }

  ll ans = 0;
  for(int i=0;i<n;i++){
    if(mp.find(a[i]) != mp.end()){
      ans += mp[a[i]];
    }
  }

  cout << ans << endl;
}
