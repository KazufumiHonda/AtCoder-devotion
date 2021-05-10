#include <iostream>
using namespace std;
using ll = long long;
int main(){
  ll n;
  int k;
  cin >> n >> k;

  for(int i=0;i<k;i++){
    if(n%200 == 0){
      n /= 200;
    }else{
      n = n*1000+200;
    }
  }

  cout << n << endl;
}
