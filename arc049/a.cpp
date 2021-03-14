#include <iostream>
using namespace std;
using ll = long long;
int main() {
  string s;
  int a,b,c,d;
  cin >> s >> a >> b >> c >> d;

  string ans = "";
  for(int i=0;i<s.size();i++) {
    if(i == a || i == b || i == c || i == d){
      ans += "\"";
    }
    ans += s[i];

    if(i == s.size() -1 && d == s.size()){
      ans += "\"";
    }
  }

  cout << ans << endl;

}
