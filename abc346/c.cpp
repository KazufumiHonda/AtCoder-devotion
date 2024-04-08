#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ll = long long;
int main(){
  int n;
  ll k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  set<ll> st;
  for(int i=0;i<n;i++){
    st.insert(a[i]);
  }

  ll ans = 0;
  ll sum = 0;
  for(auto itr=st.begin();itr!=st.end();itr++){
    if(*itr <= k){
      sum += *itr;
    }
  }
  ans = k*(1+k)/2 - sum;

  std::cout << ans << std::endl;
}
