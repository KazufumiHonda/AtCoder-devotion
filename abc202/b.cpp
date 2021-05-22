#include <iostream>
using namespace std;
int main(){
  string s;
  cin >> s;
  for(int i=0;i<s.size()/2;i++){
    char c = s[i];
    s[i] = s[s.size()-1-i];
    s[s.size()-1-i] = c;
  }

  for(int i=0;i<s.size();i++){
    if(s[i] == '6') s[i] = '9';
    else if(s[i] == '9') s[i] = '6';
  }

  cout << s << endl;
}
