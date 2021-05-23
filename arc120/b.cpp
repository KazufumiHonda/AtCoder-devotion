#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main(){
  int h,w;
  cin >> h >> w;
  vector<string> s(h);
  for(int i=0;i<h;i++) cin >> s[i];

  const ll mod = 998244353;

  vector<vector<char>> c(h+w-1);

  for(int i=0;i<h;i++){
    int cn = i;
    for(int j=0;j<w;j++){
      c[cn++].emplace_back(s[i][j]);
    }
  }

  ll ans = 1;
  for(int i=0;i<h+w-1;i++){
    bool rf = false, bf = false;
    int dcnt = 0;

    for(int j=0;j<c[i].size();j++){
      if(c[i][j] == 'R') rf = true;
      if(c[i][j] == 'B') bf = true;

      if(c[i][j] == '.'){
        dcnt++;
      }
    }

    if(rf && bf){
      cout << 0 << endl;
      return 0;
    }

    if(dcnt == 0) continue;
    if(dcnt != 0 && (rf || bf)) continue;
    else ans *= 2;

    ans %= mod;
  }

  cout << ans << endl;

}
