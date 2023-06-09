#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using ll = long long;

int main(){
  int n,d;
  cin >> n >> d;
  vector<int> x(n), y(n);
  for(int i=0;i<n;i++) cin >> x[i] >> y[i];

  vector<bool> v(n);
  v[0] = true;
  queue<int> que;
  que.push(0);
  while(!que.empty()) {
    int i = que.front();
    que.pop();
    for(int j=0;j<n;j++) {
      if(i == j) continue;
      // calc distance
      int dist = (x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]);

      if(dist <= d*d) {
        if(v[i]) {
          if(!v[j]) {
            v[j] = true;
            que.push(j);
          }
        }
      }
    }
  }

  for(int i=0;i<n;i++){
    if(v[i]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
