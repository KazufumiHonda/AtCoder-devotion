#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  ll min_xor = 1<<30;
  for(int i=0;i<(1<<(n-1));i++){

    // 区切り位置
    vector<int> div;
    div.emplace_back(0);
    for(int bit=0;bit<n;bit++){
      if((i>>bit) & 1 == 1){
        div.emplace_back(bit+1);
      }
    }
    div.emplace_back(n);

    ll sum_xor;
    for(int j=0;j<div.size()-1;j++){
      ll ds_or = 0;
      for(int k=div[j];k<div[j+1];k++){
        ds_or = ds_or | a[k];
      }

      if(j == 0){
        sum_xor = ds_or;
      }else{
        sum_xor = sum_xor ^ ds_or;
      }
    }

    min_xor = min(min_xor, sum_xor);
  }

  cout << min_xor << endl;
}
