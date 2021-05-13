#include <iostream>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;

  int m = a+b;
  int ans;
  if(m>=15 && b>=8){
    ans = 1;
  }else if(m>=10 && b>=3){
    ans = 2;
  }else if(m>=3){
    ans = 3;
  }else{
    ans = 4;
  }
  cout << ans << endl;
}
