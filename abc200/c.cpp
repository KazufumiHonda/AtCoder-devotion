#include <iostream>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  map<int,ll> mp;
  for(int i=0;i<n;i++){
    int key = a[i]%200;

    if(mp.find(key) == mp.end()){
      mp.emplace(key,1);
    }else{
      mp[key]++;
    }
  }

  ll cnt = 0;
  for(auto itr=mp.begin();itr!=mp.end();itr++){
    cnt += itr->second*(itr->second -1)/2;
  }

  cout << cnt << endl;
}
