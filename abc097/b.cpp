#include <iostream>
using namespace std;
using ll = long long;
int main() {
  int x;
  cin >> x;

  if(x == 1){
    cout << 1 << endl;
  }
  else{
    int mx = 0;
    for(int i=2;i<=x;i++){
      int st = i;
      int cnt = 1;
      while(st < x){
        st *= i;
        cnt++;
      }

      if(st > x){
        st /= i;
        cnt--;
      }

      if(cnt != 1){
        mx = max(mx,st);
      }


    }

    cout << mx << endl;

  }

}
