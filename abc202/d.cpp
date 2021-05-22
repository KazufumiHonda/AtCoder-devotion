#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
  int a,b;
  ll k;
  cin >> a >> b >> k;

  int n = a+b;
  string s(n, 'a');

  for(int i=0;i<n;i++){
    ll sum = 1;
    ll j = 1, l = 1, m = 1;

    if(b == 0){
      s[i] = 'a';
      continue;
    }else if(a == 0){
      s[i] = 'b';
      continue;
    }

    while(1){
      if(j <= a+b-1) sum *= j++;
      if(l <= a-1){
        if(sum % l == 0) sum /= l++;
      }
      if(m <= b){
        if(sum % m == 0) sum /= m++;
      }

      if(j > a+b-1 && l > a-1 && m > b) break;
    }

    if(k > sum){
      s[i] = 'b';
      k -= sum;
      b--;
    }else{
      s[i] = 'a';
      a--;
    }

  }

  cout << s << endl;
}

