#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main(){
  int h,w;
  cin >> h >> w;
  vector<string> s(h);
  for(int i=0;i<h;i++) cin >> s[i];

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      int cnt = 0;
      for(int x=-1;x<=1;x++){
        for(int y=-1;y<=1;y++){
          if(x == 0 && y == 0){
            continue;
          }
          if(j+x < 0 || j+x >= w){
            continue;
          }
          if(i+y < 0 || i+y >= h){
            continue;
          }

          if(s[i+y][j+x] == '#'){
            cnt++;
          }
        }
      }

      if(s[i][j] != '#'){
        s[i][j] = cnt+'0';
      }

    }
  }

  for(int i=0;i<h;i++)
    cout << s[i] << endl;

}
