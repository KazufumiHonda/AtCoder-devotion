#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  vector<ll> a(n);

  for(int i=0;i<n;i++) cin >> s[i] >> a[i];

  ll mi = 1e9+1;
  int mi_index = 0;
  for(int i=0;i<n;i++) {
    if(a[i] < mi) {
      mi = a[i];
      mi_index = i;
    }
  }

  int j = mi_index;
  int cnt = 0;
  while(cnt < n){
    cout << s[j] << endl;
    j = (j+1)%n;
    cnt++;
  }

}
