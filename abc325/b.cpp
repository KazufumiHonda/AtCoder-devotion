#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<int> w(n), x(n);
  for(int i=0;i<n;i++) cin >> w[i] >> x[i];

  ll ans = -1;
  for(int i=0;i<=24;i++){
    ll sum = 0;
    for(int j=0;j<n;j++){
      if(9 <= (x[j]+i)%24 && (x[j]+i)%24 < 18){
        sum += w[j];
      }
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
}
