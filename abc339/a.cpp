#include <iostream>
#include <vector>
using namespace std;
int main(){
  string s;
  cin >> s;
  string ans = "";
  for(int i=s.size()-1;i>=0;i--){
    if(s[i] == '.'){
      ans = s.substr(i+1, s.size()-i+1);
      break;
    }
  }
  std::cout << ans << std::endl;
}
