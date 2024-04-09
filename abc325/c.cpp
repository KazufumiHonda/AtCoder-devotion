#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

int H, W;
vector<vector<int>> field;

void dfs(int h, int w){
  field[h][w] = 0;
  for(int dh = -1; dh <= 1; ++dh){
    for(int dw = -1; dw <= 1; ++dw){
      int nh = h + dh, nw = w + dw;

      if(nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
      if(field[nh][nw] == 0) continue;

      dfs(nh, nw);
    }
  }
}

int main(){
  cin >> H >> W;
  vector<string> s(H);
  for(int i=0;i<H;i++) cin >> s[i];

  field.resize(H, vector<int>(W));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(s[i][j] == '#') field[i][j] = 1;
      else field[i][j] = 0;
    }
  }

  int count = 0;
  for(int h=0;h<H;++h){
    for(int w=0;w<W;++w){
      if(field[h][w] == 0) continue;
      dfs(h, w);
      ++count;
    }
  }

  cout << count << endl;
}
