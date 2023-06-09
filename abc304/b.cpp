#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
  ll n;
  cin >> n;

  ll ans = n;
  if(n < 1e3) {
    ans = n;
  }
  else if(n < 1e4) {
    ans = n/10 * 10;
  }
  else if(n < 1e5) {
    ans = n/100 * 100;
  }
  else if(n < 1e6) {
    ans = n/1000 * 1000;
  }
  else if(n < 1e7) {
    ans = n/10000 * 10000;
  }
  else if(n < 1e8) {
    ans = n/100000 * 100000;
  }
  else if(n < 1e9) {
    ans = n/1000000 * 1000000;
  }

  cout << ans << endl;
}
