#include <iostream>
#include <vector>
using namespace std;
int main(){
  int w,b;
  cin >> w >> b;
  string base = "wbwbwwbwbwbw";
  string s = "";
  while(s.size() < (w+b)*2){
    s += base;
  }
  int substr_len = w+b;
  bool flag = false;
  for(int i=0;i<s.size()-substr_len+1;i++){
    int w_cnt = 0;
    int b_cnt = 0;
    for(int j=0;j<substr_len;j++){
      if(s[i+j] == 'w') w_cnt++;
      else if(s[i+j] == 'b') b_cnt++;
    }
    if(w_cnt == w && b_cnt == b){
      flag = true;
      break;
    }
  }

  if(flag) std::cout << "Yes\n";
  else std::cout << "No\n";
}
