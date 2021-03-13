#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;

  int c = 0;
  int cnt = 0;
  while(1) {
    c += x;
    cnt++;
    if(c % 360 == 0){
      cout << cnt << endl;
      break;
    }
  }

}
