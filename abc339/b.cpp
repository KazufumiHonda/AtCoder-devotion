#include <iostream>
#include <vector>
using namespace std;
int main(){
  int h,w,n;
  cin >> h >> w >> n;

  // black: 1, white: 0
  vector<vector<bool>> grid(h, vector<bool>(w));

  const pair<int, int> UP    = std::make_pair(-1, 0);
  const pair<int, int> RIGHT = std::make_pair( 0, 1);
  const pair<int, int> DOWN  = std::make_pair( 1, 0);
  const pair<int, int> LEFT  = std::make_pair( 0,-1);
  pair<int, int> directions[4] = {UP, RIGHT, DOWN, LEFT};

  int nw = 0, nh = 0;
  int nd = 0;
  for(int i=0;i<n;i++){
    // black
    if(grid[nh][nw]){
      grid[nh][nw] = false;
      nd = (nd-1)%4;
      if(nd < 0) nd += 4;
    }
    // white
    else{
      grid[nh][nw] = true;
      nd = (nd+1)%4;
      if(nd < 0) nd += 4;
    }
    nh = (nh + directions[nd].first)%h;
    if(nh < 0) nh += h;
    nw = (nw + directions[nd].second)%w;
    if(nw < 0) nw += w;
  }

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(grid[i][j]){
        std::cout << "#";
      }
      else{
        std::cout << ".";
      }
    }
    std::cout << std::endl;
  }
}
