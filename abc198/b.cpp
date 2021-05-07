#include <iostream>
using namespace std;
int main(){
  string n;
  cin >> n;

  int N = n.size();
  for(int i=0;i<N;i++){
    bool flag = true;
    for(int j=0;j<n.size()/2;j++){
      if(n[j] != n[n.size()-j-1]){
        flag = false;
        break;
      }
    }
    if(flag){
      cout << "Yes\n";
      return 0;
    }

    n = '0'+n;
  }

  cout << "No\n";
}
