#include <iostream>
#include <vector>
using namespace std;
int main(){
  int h,w,x,y;
  cin >> h >> w >> x >> y;
  vector<string> s(h);
  for(int i=0;i<h;i++) cin >> s[i];

  x--;
  y--;


  int cnt = 1;
  for(int i=x+1;i<h;i++){
    if(s[i][y] == '#'){
      break;
    }else{
      cnt++;
    }
  }

  for(int i=x-1;i>=0;i--){
    if(s[i][y] == '#'){
      break;
    }else{
      cnt++;
    }
  }

  for(int i=y+1;i<w;i++){
    if(s[x][i] == '#'){
      break;
    }else{
      cnt++;
    }
  }

  for(int i=y-1;i>=0;i--){
    if(s[x][i] == '#'){
      break;
    }else{
      cnt++;
    }
  }

  cout << cnt << endl;
}
