#include <iostream>
using namespace std;
using ll = long long;
int main(){
  ll t;
  ll n;
  cin >> t >> n;

  ll res = (100+t)*n/t;
  if((100+t)*n % t == 0){
    cout << res-1 << endl;
  }else{
    cout << res << endl;
  }
}
